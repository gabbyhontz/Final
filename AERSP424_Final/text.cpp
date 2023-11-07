#include "text.h"

using namespace std;

void text::bats_print() {
	cout << "You decide to go down the path littered with bats. You set into the hall and they are all very quiet. The bats don't" << endl;
	cout << "move until you step on a rock and trip over your feet making a loud thudding sound. all above you bats are swooping" << endl;
	cout << "down towards your head. To avoid the bats you begin crawling on your hand and knees in order to avoid them. " << endl;
	cout << "Eventually you reach another cross roads and you are free from the bats. You carefully stand up and examine the " << endl;
	cout << "choices in front of you. You can go to straight down the path covered in bugs or to the right down the path covered" << endl;
	cout << "in human bones." << endl;
	cout << endl;
}

void text::bones_print() {
	cout << "You carefully step through the piles of bones. Every once in a while you can feel the crack of the bones underneath " << endl;
	cout << "boots. You come to an opening in the hallway that leads to a large room decorated with chandelers covered in cob webs." << endl;
	cout << "All of a sudden brick are being flung across the room and a huge monster emerges from the wall." << endl;
	cout << endl;
	cout << endl;

	cout << "you have reached the large boss" << endl;
	cout << endl;
	cout << "LET THE BATTLE BEGIN!" << endl;
}

void text::bugs_print() {
	cout << "You begin to creep through the hallway filled with bugs and step on a few of them along your way. With every step you" << endl;
	cout << "take you cringe at the crunching sound of their exo-skeletons. You eventually reach another fork in the road." << endl;
	cout << "You can either go straight down a path filled with snakes or left down a path covered in thick vines." << endl;
	cout << endl;
}

void text::congrats_mini_print() {
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Congratulations! You have defeated the Mini Boss!" << endl;
	cout << endl;
	cout << endl;
	cout << "You just defeated a monster and can't believe what you just encountered. What kind of madness is waiting ahead for you," << endl;
	cout << "you wonder. You continue to walk down the lit path and come to another cross roads. This time you can go straight down " << endl;
	cout << "a path that is covered in vines or you can go to the right down a path that is covered in snakes. You must decide which " << endl;
	cout << "path to go down quickly in fear of possible monsters that lerk behind you. " << endl;
	cout << endl;
}

void text::directions_print() {
	cout << "Welcome to The Battles of Talarek!" << endl;
	cout << endl;
	cout << "	Directions: " << endl;
	cout << "The Battles of Talarek is a single player game where the player must reach the end of the established maze and defeat" << endl;
	cout << "the final boss. The player will make choices through out their time in the maze, and based on their chosen directions" << endl;
	cout << "they will end up at one of three boss battles. Along the way the player may encounter mini battles. The player must " << endl;
	cout << "defeat these battles in order to move on in the maze." << endl;
	cout << endl;
	cout << "Your goal: Dont't die. It's that simple." << endl;
	cout << "GOOD LUCK!" << endl;
	cout << endl;
	cout << endl;
}

void text::first_split_print() {
	cout << "You are met with a split in the path. You can go right down a quiet path with one faint torch lit up in the distance," << endl;
	cout << "or you can go down the path to the right which is pitch black and has the sounds of monsters echoing through out." << endl;
	cout << endl;
	cout << "Do you choose to go down the lit path to the right or the dark monster ridden path to the left?" << endl;
	cout << "1) right " << endl; //white path
	cout << "2) left " << endl; //pink and red path
}

void text::mini_encounter_print() {
	cout << "You continue walking down the lit path. All of a sudden you see a dark shadow bolt across the hall and then disappear." << endl;
	cout << "You hear the sound of screatching in the distance and then all of a sudden it goes quiet. From the shadows a monster" << endl;
	cout << "appears. You will not be allowed past the monster until he is defeated. Lets start the battle. To battle enemies you can" << endl;
	cout << "pick between what attack or spell you would like to cast. Each item deals different damage so be careful." << endl;
	cout << endl;
	cout << endl;
}

void text::qandd_print() {
	cout << "You continue to walk down the scarily quiet and dark path. With every step you take you fear that anothe monster will " << endl;
	cout << "jump out at you. After some time you reach another cross roads where you can travel straight or down a path littered " << endl;
	cout << "with bones or a path crawling with thousands of bugs." << endl;
	cout << endl;
	cout << "Which path would you like to choose, the straight path with bones or the left path with bugs?" << endl;
	cout << "1) straight" << endl; //red path
	cout << "2) left" << endl; //pink path
}

void text::snakes_print() {
	cout << "As you step through the path filled with snakes you realize that the snakes are moving to make room for you to walk." << endl;
	cout << "You slowly tip toe through the snake fill hallway making sure not to anger the snakes. You fear don't know much" << endl;
	cout << "about snakes so you aren't sure if these ones are harmful or not. You eventually reach an opening that leads into a" << endl;
	cout << "large room. All of a sudden a large crack is heard and a large animal approaches you." << endl;
	cout << endl;
	cout << endl;

	cout << "you have reached the medium boss" << endl;
	cout << endl;
	cout << "LET THE BATTLE BEGIN!" << endl;
}

void text::start_path_print() {
	//description of walking down the hall
	cout << "You are walking down a straight path inside of a dungeon of an ancient castle. You notice that the walls are filled" << endl;
	cout << "with moss and kicked up dust is scattered about the floors and walls. Strange sounds echo through out the long dark" << endl;
	cout << "hallway that is infront of you. You feel frightened and uncertained of the journey ahead, but you must move forward" << endl;
	cout << "if you wish to escape. You continue to walk some time, all the while the volume of the noises is increasing with" << endl;
	cout << "every step you make. Up ahead you see what looks to be a torch signifying that you maybe hit a dead end. You approach" << endl;
	cout << "the torch and realize that you have reached a cross roads." << endl;
	cout << endl;
}

void text::title_print() {
	cout << "				$$$ $  $ $$$    $$$   $$  $$$ $$$ $$$  $$     $$  $$$" << endl;
	cout << "				 $  $  $ $      $  $ $  $  $   $  $   $      $  $ $  " << endl;
	cout << "				 $  $$$$ $$     $$$  $$$$  $   $  $$  $$$    $  $ $$ " << endl;
	cout << "				 $  $  $ $      $  $ $  $  $   $  $     $    $  $ $  " << endl;
	cout << "				 $  $  $ $$$    $$$  $  $  $   $  $$$ $$      $$  $  " << endl;

	cout << endl;

	cout << "					  $$$  $$  $    $$  $$  $$$ $  $" << endl;
	cout << "					   $  $  $ $   $  $ $ $ $   $ $ " << endl;
	cout << "					   $  $$$$ $   $$$$ $$$ $$  $$  " << endl;
	cout << "					   $  $  $ $   $  $ $$  $   $ $ " << endl;
	cout << "					   $  $  $  $$ $  $ $ $ $$$ $  $" << endl;

	cout << endl;

	cout << "					  _   _   _            _   _   _" << endl;
	cout << "					 |;|_|;|_|;|    |>>>  |;|_|;|_|;|" << endl;
	cout << "					 |_   .   _|    |     |_     . _|" << endl;
	cout << "					  | ..   ;|_____|______|   ;   |" << endl;
	cout << "					  |            ..         ..   |" << endl;
	cout << "					  |  ;     ..    ;     .       |" << endl;
	cout << "					  |   ..     ________    ;    .|" << endl;
	cout << "					  |     ;   ||||||||||         |" << endl;
	cout << "					  |  ..     ||||||||||  ..  ;  |" << endl;
	cout << "					  |_________||||||||||_________|" << endl;
	cout << "			    By: Gabriella Hontz, Nicole Collom, and Cecelia Erndwein" << endl;

	cout << endl;
	cout << endl;
}

void text::vines_print() {
	cout << "You push through the thick vines cascading through out the hallway. Eventually you make it to a clearing and you are " << endl;
	cout << "greated by the back of another monster. This one is much bigger than the first one you encountered." << endl;
	cout << "You don't know what to think, but the monster must be killed, so you take a deap breath and prepare for battle." << endl;
	cout << endl;
	cout << endl;

	cout << "You have reached the small boss." << endl;
	cout << endl;
	cout << "LET THE BATTLE BEGIN!" << endl;
}