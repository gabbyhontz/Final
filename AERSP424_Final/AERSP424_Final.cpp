// AERSP424_Final.cpp : Defines the entry point for the application.
//

#include "AERSP424_Final.h"
#include "spacing.h"
#include "text.h"
#include "game.h"

using namespace std;

int main()
{
	//initialize the random device seed from the random class
	std::random_device seed;
	Random rnd(seed());

	//prints title.cpp
	text printtitle;
	printtitle.title_print();

	//cin value to lead to the directions page
	int begin;
	//this while loop takes into account inccorect choices and returns the player back to the question until a valid
	//input is typed in
	while (true) {
		cout << endl;
		cout << "When you are ready to start the game type the number (1) and hit enter." << endl;

		if (cin >> begin && begin == 1) {
			break;  // Valid input, exit the loop
		}
		else {
			cout << "Invalid input. Please enter 1 to start the game." << endl;
			cin.clear();  // Clear error flags
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
		}
	}

	//prints spacing.cpp
	spacing printspacing;
	printspacing.spacing_print();

	//while loop that begins the game
	while (begin == 1) {
		cout << endl;
		cout << endl;

		//print directions.cpp
		text printdirections;
		printdirections.directions_print();

		int start;
		//this while loop takes into account inccorect choices and returns the player back to the question until a valid
		//input is typed in
		while (true) {
			cout << endl;
			cout << "When you are ready type the number (1) and hit enter to begin your adventure into Talarek." << endl;

			if (cin >> start && start == 1) {
				break;  // Valid input, exit the loop
			}
			else {
				cout << "Invalid input. Please enter 1 to begin the adventure." << endl;
				cin.clear();  // Clear error flags
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
			}
		}

		//prints spacing.cpp
		printspacing.spacing_print();

		//while loop to start the game
		while (start == 1) {
			////////////////////////////////////////////////////////////////////////////////////////////
			//character selection
			int character;
			cout << "Choose a character: " << endl;
			cout << "1) Wizard" << endl;
			cout << "2) Fighter" << endl;
			cin >> character;

			Model adv;

			if (character == 1) {
				adv = Model("Wizard", 350, 35, 55, 0);
			}
			else if (character == 2) {
				adv = Model("Fighter", 400, 40, 65, 0);
			}

			//prints spacing.cpp
			printspacing.spacing_print();

			int advType;
			int spaCounter = 50; //counts turns down from 50
			////////////////////////////////////////////////////////////////////////////////////////////

			//print start_path.cpp
			text printstartpath;
			printstartpath.start_path_print();

			//input decision to walk down which path
			int wrp;
			//this while loop takes into account inccorect choices and returns the player back to the question until a valid
			//input is typed in
			while (true) {
				cout << endl;
				//print first_split.cpp
				text printfirstsplit;
				printfirstsplit.first_split_print();

				if (cin >> wrp && (wrp == 1 || wrp == 2)) {
					break;  // Valid input, exit the loop
				}
				else {
					cout << "Invalid input. Please enter 1 or 2." << endl;
					cin.clear();  // Clear error flags
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
				}
			}

			//prints spacing.cpp
			printspacing.spacing_print();

			//decision one down the path to the right
			while (wrp == 1) {

				//print mini_encounter.cpp
				text printminiencounter;
				printminiencounter.mini_encounter_print();


				//////////////////////////////////////////////////////////////////////////////////////////////
				/*input mini boss character*/ 
				Model boss1("Dretch", 50, 1, 2, 5); //mini boss 1

				std::cout << "You encountered a Dretch!" << '\n';

				while (!isDead(adv) && !isDead(boss1)) {
					do {
						std::cout << '\n'
							<< "1 Normal Attack - 2 Special Attack (" << spaCounter
							<< ") : ";
						std::cin >> advType;
					} while (advType < 1 || advType > 2);

					fight(advType, spaCounter, adv, boss1, rnd);
				}

				if (isDead(boss1)) {
					std::cout << "You defeated the Dretch! You Win!" << '\n';
				}
				else {
					std::cout << "You are DEAD!" << '\n';
				}
				//////////////////////////////////////////////////////////////////////////////////////////////

				//prints congrats_mini.cpp
				text printcongratsmini;
				printcongratsmini.congrats_mini_print();

				//input to decide on another path along the maze
				int wp1;
				//this while loop takes into account inccorect choices and returns the player back to the question until a valid
				//input is typed in
				while (true) {
					cout << endl;
					cout << "Which path would you like to choose, the straight path with vines or the right path with snakes?" << endl;
					cout << "1) straight" << endl; //white path
					cout << "2) right" << endl; //pink path

					if (cin >> wp1 && (wp1 == 1 || wp1 == 2)) {
						break;  // Valid input, exit the loop
					}
					else {
						cout << "Invalid input. Please enter 1 or 2." << endl;
						cin.clear();  // Clear error flags
						cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
					}
				}

				//prints spacing.cpp
				printspacing.spacing_print();

				//down the straight path //white path
				while (wp1 == 1) {

					//prints vines.cpp
					text printvines;
					printvines.vines_print();

					////////////////////////////////////////////////////////////////////////////////////////////
					//insert small boss
					Model boss2("Young Black Dragon", 200, 5, 7, 10); //small boss

					std::cout << "You encountered a Young Black Dragon!" << '\n';

					while (!isDead(adv) && !isDead(boss2)) {
						do {
							std::cout << '\n'
								<< "1 Normal Attack - 2 Special Attack (" << spaCounter
								<< ") : ";
							std::cin >> advType;
						} while (advType < 1 || advType > 2);

						fight(advType, spaCounter, adv, boss2, rnd);
					}

					if (isDead(boss2)) {
						std::cout << "You defeated the Young Black Dragon! You Win!" << '\n';
					}
					else {
						std::cout << "You are DEAD!" << '\n';
					}
					////////////////////////////////////////////////////////////////////////////////////////////

					return 0;
				}

				//down the path to the right //the pink path
				while (wp1 == 2) {

					// prints snakes.cpp
					text printsnakes;
					printsnakes.snakes_print();

					/////////////////////////////////////////////////////////////////////////////////////////////
					//insert medium boss 
					Model boss3("Displacer Beast", 350, 10, 20, 15); //medium boss

					std::cout << "You encountered a Displacer Beast!" << '\n';

					while (!isDead(adv) && !isDead(boss3)) {
						do {
							std::cout << '\n'
								<< "1 Normal Attack - 2 Special Attack (" << spaCounter
								<< ") : ";
							std::cin >> advType;
						} while (advType < 1 || advType > 2);

						fight(advType, spaCounter, adv, boss3, rnd);
					}

					if (isDead(boss3)) {
						std::cout << "You defeated the Displacer Beast! You Win!" << '\n';
					}
					else {
						std::cout << "You are DEAD!" << '\n';
					}
					/////////////////////////////////////////////////////////////////////////////////////////////

					return 0;
				}

				return 0;
			}

			//decision two down path to the left
			while (wrp == 2) {

				//print mini_encounter.cpp
				text printminiencounter;
				printminiencounter.mini_encounter_print();

				//////////////////////////////////////////////////////////////////////////////////////////////////
				/*input mini boss character*/ 
				Model boss5("Manes", 50, 3, 2, 7); //mini boss 2

				std::cout << "You encountered a Manes!" << '\n';

				while (!isDead(adv) && !isDead(boss5)) {
					do {
						std::cout << '\n'
							<< "1 Normal Attack - 2 Special Attack (" << spaCounter
							<< ") : ";
						std::cin >> advType;
					} while (advType < 1 || advType > 2);

					fight(advType, spaCounter, adv, boss5, rnd);
				}

				if (isDead(boss5)) {
					std::cout << "You defeated the Manes! You Win!" << '\n';
				}
				else {
					std::cout << "You are DEAD!" << '\n';
				}
				//////////////////////////////////////////////////////////////////////////////////////////////////

				//prints congrats_mini.cpp
				text printcongratsmini;
				printcongratsmini.congrats_mini_print();

				//input to decide on another path along the maze
				int rp1;
				//this while loop takes into account inccorect choices and returns the player back to the question until a valid
				//input is typed in
				while (true) {
					cout << endl;
					cout << "Which path would you like to choose, the straight path that is pitch black or the right path with bats?" << endl;
					cout << "1) straight" << endl; //red path
					cout << "2) right" << endl; //pink path

					if (cin >> rp1 && (rp1 == 1 || rp1 == 2)) {
						break;  // Valid input, exit the loop
					}
					else {
						cout << "Invalid input. Please enter 1 or 2." << endl;
						cin.clear();  // Clear error flags
						cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
					}
				}

				//prints spacing.cpp
				printspacing.spacing_print();

				//while loop for straight choice pitch black //red path
				while (rp1 == 1) {

					int rp2;
					//this while loop takes into account inccorect choices and returns the player back to the question until a valid
					//input is typed in
					while (true) {
						cout << endl;
						//prints q&d.cpp
						text printqandd;
						printqandd.qandd_print();

						if (cin >> rp2 && (rp2 == 1 || rp2 == 2)) {
							break;  // Valid input, exit the loop
						}
						else {
							cout << "Invalid input. Please enter 1 or 2." << endl;
							cin.clear();  // Clear error flags
							cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
						}
					}

					//prints spacing.cpp
					printspacing.spacing_print();

					//straight down bone path //red path
					while (rp2 == 1) {

						// prints bones.cpp
						text printbones;
						printbones.bones_print();

						/////////////////////////////////////////////////////////////////////////////////////
						//insert large boss
						Model boss4("Lich", 400, 20, 30, 35); //large boss

						std::cout << "You are encounter a Lich!" << '\n';

						while (!isDead(adv) && !isDead(boss4)) {
							do {
								std::cout << '\n'
									<< "1 Normal Attack - 2 Special Attack (" << spaCounter
									<< ") : ";
								std::cin >> advType;
							} while (advType < 1 || advType > 2);

							fight(advType, spaCounter, adv, boss4, rnd);
						}

						if (isDead(boss4)) {
							std::cout << "You defeated the Lich! You Win!" << '\n';
						}
						else {
							std::cout << "You are DEAD!" << '\n';
						}
						/////////////////////////////////////////////////////////////////////////////////////

						return 0;
					}

					//while loop that goes left down pink path //bug path
					while (rp2 == 2) {

						//prints bugs.cpp
						text printbugs;
						printbugs.bugs_print();

						int wp2;
						//this while loop takes into account inccorect choices and returns the player back to the question until a valid
						//input is typed in
						while (true) {
							cout << endl;
							cout << "Which path would you like to choose, the straight path with snakes or the left path with vines?" << endl;
							cout << "1) straight" << endl; //pink path
							cout << "2) left" << endl; //white path

							if (cin >> wp2 && (wp2 == 1 || wp2 == 2)) {
								break;  // Valid input, exit the loop
							}
							else {
								cout << "Invalid input. Please enter 1 or 2." << endl;
								cin.clear();  // Clear error flags
								cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
							}
						}

						//prints spacing.cpp
						printspacing.spacing_print();

						//straight down bones path //pink path
						while (wp2 == 1) {

							// prints snakes.cpp
							text printsnakes;
							printsnakes.snakes_print();

							/////////////////////////////////////////////////////////////////////////////////////
							//insert medium boss 
							Model boss6("Displacer Beast", 350, 10, 20, 15); //medium boss

							std::cout << "You encountered a Displacer Beast!" << '\n';

							while (!isDead(adv) && !isDead(boss6)) {
								do {
									std::cout << '\n'
										<< "1 Normal Attack - 2 Special Attack (" << spaCounter
										<< ") : ";
									std::cin >> advType;
								} while (advType < 1 || advType > 2);

								fight(advType, spaCounter, adv, boss6, rnd);
							}

							if (isDead(boss6)) {
								std::cout << "You defeated the Displacer Beast! You Win!" << '\n';
							}
							else {
								std::cout << "You are DEAD!" << '\n';
							}
							////////////////////////////////////////////////////////////////////////////////////

							return 0;
						}

						//left down vines path //white path
						while (wp2 == 2) {

							//prints vines.cpp
							text printvines;
							printvines.vines_print();

							////////////////////////////////////////////////////////////////////////////////////
							//insert small boss
							Model boss7("Young Black Dragon", 200, 5, 7, 10); //small boss

							std::cout << "You encountered a Young Black Dragon!" << '\n';

							while (!isDead(adv) && !isDead(boss7)) {
								do {
									std::cout << '\n'
										<< "1 Normal Attack - 2 Special Attack (" << spaCounter
										<< ") : ";
									std::cin >> advType;
								} while (advType < 1 || advType > 2);

								fight(advType, spaCounter, adv, boss7, rnd);
							}

							if (isDead(boss7)) {
								std::cout << "You defeated the Young Black Dragon! You Win!" << '\n';
							}
							else {
								std::cout << "You are DEAD!" << '\n';
							}
							/////////////////////////////////////////////////////////////////////////////////////

							return 0;
						}
					}
				}

				//while loop of rp1 that travels to the right down the pink path with bats
				while (rp1 == 2) {

					// prints snakes.cpp
					text printbats;
					printbats.bats_print();

					int rp3;
					//this while loop takes into account inccorect choices and returns the player back to the question until a valid
					//input is typed in
					while (true) {
						cout << "Which path would you like to choose, the straight path with bugs or the right path with bones?" << endl;
						cout << "1) straight" << endl; //pink path
						cout << "2) right" << endl; //red path

						if (cin >> rp3 && (rp3 == 1 || rp3 == 2)) {
							break;  // Valid input, exit the loop
						}
						else {
							cout << "Invalid input. Please enter 1 or 2." << endl;
							cin.clear();  // Clear error flags
							cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
						}
					}

					//prints spacing.cpp
					printspacing.spacing_print();

					//straight down bugs path //pink path
					while (rp3 == 1) {

						//prints bugs.cpp
						text printbugs;
						printbugs.bugs_print();

						int wp3;
						//this while loop takes into account inccorect choices and returns the player back to the question until a valid
						//input is typed in
						while (true) {
							cout << "Which path would you like to choose, the straight path with snakes or the left path with vines?" << endl;
							cout << "1) straight" << endl; //pink path
							cout << "2) left" << endl; //white path

							if (cin >> wp3 && (wp3 == 1 || wp3 == 2)) {
								break;  // Valid input, exit the loop
							}
							else {
								cout << "Invalid input. Please enter 1 or 2." << endl;
								cin.clear();  // Clear error flags
								cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
							}
						}

						//prints spacing.cpp
						printspacing.spacing_print();

						//straight down the snakes path //pink path
						while (wp3 == 1) {

							//prints snakes.cpp
							text printsnakes;
							printsnakes.snakes_print();

							///////////////////////////////////////////////////////////////////////////////////
							//insert medium boss 
							Model boss8("Displacer Beast", 350, 10, 20, 15); //medium boss

							std::cout << "You encountered a Displacer Beast!" << '\n';

							while (!isDead(adv) && !isDead(boss8)) {
								do {
									std::cout << '\n'
										<< "1 Normal Attack - 2 Special Attack (" << spaCounter
										<< ") : ";
									std::cin >> advType;
								} while (advType < 1 || advType > 2);

								fight(advType, spaCounter, adv, boss8, rnd);
							}

							if (isDead(boss8)) {
								std::cout << "You defeated the Displacer Beast! You Win!" << '\n';
							}
							else {
								std::cout << "You are DEAD!" << '\n';
							}
							//////////////////////////////////////////////////////////////////////////////////////

							return 0;
						}

						//left down the vines path //white path
						while (wp3 == 2) {

							//prints vines.cpp
							text printvines;
							printvines.vines_print();

							///////////////////////////////////////////////////////////////////////////////////
							//insert small boss
							Model boss9("Young Black Dragon", 200, 5, 7, 10); //small boss

							std::cout << "You encountered a Young Black Dragon!" << '\n';

							while (!isDead(adv) && !isDead(boss9)) {
								do {
									std::cout << '\n'
										<< "1 Normal Attack - 2 Special Attack (" << spaCounter
										<< ") : ";
									std::cin >> advType;
								} while (advType < 1 || advType > 2);

								fight(advType, spaCounter, adv, boss9, rnd);
							}

							if (isDead(boss9)) {
								std::cout << "You defeated the Young Black Dragon! You Win!" << '\n';
							}
							else {
								std::cout << "You are DEAD!" << '\n';
							}
							/////////////////////////////////////////////////////////////////////////////////

							return 0;
						}
					}

					//right down bone path //red path
					while (rp3 == 2) {

						// prints bones.cpp
						text printbones;
						printbones.bones_print();

						//////////////////////////////////////////////////////////////////////////////////////
						//insert large boss
						Model boss10("Lich", 400, 20, 30, 35); //large boss

						std::cout << "You are encounter a Lich!" << '\n';

						while (!isDead(adv) && !isDead(boss10)) {
							do {
								std::cout << '\n'
									<< "1 Normal Attack - 2 Special Attack (" << spaCounter
									<< ") : ";
								std::cin >> advType;
							} while (advType < 1 || advType > 2);

							fight(advType, spaCounter, adv, boss10, rnd);
						}

						if (isDead(boss10)) {
							std::cout << "You defeated the Lich! You Win!" << '\n';
						}
						else {
							std::cout << "You are DEAD!" << '\n';
						}
						//////////////////////////////////////////////////////////////////////////////////////

						return 0;
					}
				}

				return 0;
			}
		}

		return 0;
	}
	return 0;
}
