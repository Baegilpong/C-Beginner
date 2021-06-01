//File Name: rpsV3.cpp
//Author: Phong N
//Description: Rock Paper Scissors game Version 3
//Rock Paper Scissor 2 player game
//Scoreboard omitted until version 4
//Readability improved
//subtasks turned into fuctions
//documentation improved

#include <iostream>
using namespace std;

void introduction();
//Postcondition: Prints game introduction as well as rules.
void menu(int& option);
//Precondition: User inputs a choice to choose in menu.
//Postcondition: Prints menu option for screen.
void start();
//Postcondition: A round of rock paper scissor is started.
void error();
//Precondition: User enters a wrong option.
//Postcondition: Prints input error message.
void game(char p1c, char p2c);
//Postcondition: Decides the result of the round depending on player 1 and 2's choice.

int main()
{
	int choice; //user choice to choose from menu
	char ans; //user choice to continue

	introduction();

	do
	{
		menu(choice);

		cout << "\nContinue? Enter Y for Yes or N for No\n";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');

	return 0;
}

void introduction()
{
	cout << "***Phong's Rock Paper Scissors Game Version 3***\n"
		<< "How to play:\n"
		<< "The choices are:\n"
		<< "R for Rock\n"
		<< "P for Paper\n"
		<< "S for Scissors\n";
}

void menu(int& option)
{
	cout << "Please select an option:\n"
		<< "1 to start game\n"
		<< "2 to see player statistics\n"
		<< "3 to exit game\n";
	cin >> option;

	if (option == 1)
		start();
	else if (option == 2)
		cout << "stats() under construction";
	else if (option == 3)
		cout << "See you next time!\n";
	else
		error();
}

void error()
{
	cout << "Error. That is not an option!\n";
}

void start()
{
	char p1, p2;

	cout << "Enter Player 1 Choice: ";
	cin >> p1;
	cout << "Enter Player 2 Choice: ";
	cin >> p2;

	p1 = tolower(p1); //in case choice is upper case, change it to lower case
	p2 = tolower(p2); //in case choice is upper case, change it to lower case

	if ((p1 != 'r') && (p1 != 'p') && (p1 != 's'))
		error();
	else if ((p2 != 'r') && (p2 != 'p') && (p2 != 's'))
		error();
	else
		game(p1, p2);
}

void game(char p1c, char p2c)
{
	//player1 selects rock
	if ((p1c == 'r') && (p2c == 'p'))
		cout << "Player 2 Wins!\n";
	else if ((p1c == 'r') && (p2c == 's'))
		cout << "Player 1 Wins!\n";

	//player1 selects paper
	if ((p1c == 'p') && (p2c == 'r'))
	{
		cout << "Player 1 Wins!\n";
	}
	else if ((p1c == 'p') && (p2c == 's'))
		cout << "Player 2 Wins!\n";

	//player1 selects scissors
	if ((p1c == 's') && (p2c == 'p'))
		cout << "Player 1 Wins!\n";
	else if ((p1c == 's') && (p2c == 'r'))
		cout << "Player 2 Wins!\n";
	//player 1 and player 2 select the same choice
	else if (p1c == p2c)
		cout << "It's a Tie!\n";
}

