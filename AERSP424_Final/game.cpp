// game.cpp
#include "game.h"

Random::Random(unsigned int seed) : gen(seed) {}//random number generation

int Random::number(int min, int max) {          //Random number form 0-99 
    std::uniform_int_distribution<int> dist(min, max);
    return (dist(gen));
}

Model::Model() : name(""), health(0), attack(0), spattack1(0), spattack2(0) {}

Model::Model(std::string a, int b, int c, int d, int e)//Model of the inputs for each charachter and boss that is battled
    : name(a), health(b), attack(c), spattack1(d), spattack2(e) {}

void fight(int advType, int& spaCounter, Model& player, Model& enemy,
    Random& rnd) {
    // player attack
    int damage = getDamage(rnd, player, advType, spaCounter);//implimentinginght get damage function. 
    enemy.health -= damage;//enemy damage
    std::cout << player.name << " deals : " << damage << " to... \n" << enemy.name
        << " -- health left : " << enemy.health << '\n';

    if (isDead(enemy))//use of the bool function below. Determining if the enemy is dead after each hit.
        return;

    // enemy attack
    damage = getDamage(rnd, enemy, 0, spaCounter);
    player.health -= damage;//player damage 
    std::cout << enemy.name << " deals : " << damage << " to... \n" << player.name
        << " -- health left : " << player.health << '\n';
}

int getDamage(Random& rnd, Model& a, int advType, int& spaCounter) {
    // crit
    int crit = 1;
    if (rnd.number(0, 99) == 99)//if  the random number happens to be 99 then there will be a 2 times multiplier added. 
        crit = 2;

    // Player attcak choice, this value is inputed form the player. 
    if (advType == 1 && spaCounter == 0)
        return (a.attack * crit);
    else if (advType == 2 && spaCounter > 0) {
        spaCounter--;
        return (a.spattack1 * crit);
    }

    // enemy damage Using a if/if else loop to deteming what kind of attack the enemy will use. Only enemys have two options for special attacks.
    int enemyType = rnd.number(0, 99);
    if (enemyType > 94 && enemyType <= 99 && (a.name == "Lich" || a.name == "Displacer Beast" || a.name == "Young Black Dragon"|| a.name=="Manes" ||a.name=="Dretch"))
        return (a.spattack2 * crit);
    else if (enemyType > 79 && enemyType <= 99 && (a.name == "Lich" || a.name == "Displacer Beast" || a.name == "Young Black Dragon" || a.name == "Manes" || a.name == "Dretch"))
        return (a.spattack1 * crit);
    else
        return (a.attack * crit);
}

bool isDead(Model& a) {// fnciton to detemine if the player or enemy is dead.
    return (a.health <= 0 ? true : false);
}