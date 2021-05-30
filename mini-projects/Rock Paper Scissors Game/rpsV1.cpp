//File Name: rps.cpp
//Author: Phong N
//Description: Rock Paper Scissors game Version 1
//Rock Paper Scissor 2-player game
//Rock beats scissors
//Scissors beats paper
//Paper beats rock
//If two players choose the same, No one wins

#include <iostream>
using namespace std;

int main()
{
	int choice = 0;
	int p1wins = 0, p1losses = 0, p2wins = 0, p2losses = 0, ties = 0;

	cout << "***Phong's Rock Paper Scissors Game Version 1***\n"
		<< "How to play: There will be 5 rounds\nThe choices are:\nR for Rock\nP for Paper\nS for Scissors\n"
		<< "\nPlease select an option:\n1 to start game\n2 to see player statistics(under construction)\n3 to end session\n";
	cin >> choice;
	switch (choice) 
	{
		case(1):
			cout << "starts the game\n";
			
				char player1, player2;
				cout << "Enter Player 1 Choice: ";
				cin >> player1;
				cout << "Enter Player 2 Choice: ";
				cin >> player2;

				if ((player1 != 'r') && (player1 != 'R') 
					&& (player1 != 'p') && (player1 != 'P') 
					&& (player1 != 's') && (player1 != 'S'))
					cout << "Player 1 Choice Invalid\n";
				else if ((player2 != 'r') && (player2 != 'R')
					&& (player2 != 'p') && (player2 != 'P')
					&& (player2 != 's') && (player2 != 'S'))
					cout << "Player 2 Choice Invalid\n";
				else 
				{
					//player1 selects rock
					if ((player1 == 'r' || player1 == 'R') && (player2 == 'p' || player2 == 'P'))
						cout << "Player 1 Wins!\n";
					else if ((player1 == 'r' || player1 == 'R') && (player2 == 's' || player2 == 'S'))
						cout << "Player 2 Wins!\n";
					else if (((player1 == 'r') || (player1 == 'R')) && ((player2 == 'r') || (player2 == 'R')))
						cout << "It's a Tie!\n";

					//player1 selects paper
					if ((player1 == 'p' || player1 == 'P') && (player2 == 'r' || player2 == 'R'))
						cout << "Player 1 Wins!\n";
					else if ((player1 == 'p' || player1 == 'P') && (player2 == 's' || player2 == 'S'))
						cout << "Player 2 Wins!\n";
					else if (((player1 == 'p') || (player1 == 'P')) && ((player2 == 'p') || (player2 == 'P')))
						cout << "It's a Tie!\n";

					//player1 selects scissors
					if ((player1 == 's' || player1 == 'S') && (player2 == 'p' || player2 == 'P'))
						cout << "Player 1 Wins!\n";
					else if ((player1 == 's' || player1 == 'S') && (player2 == 'r' || player2 == 'R'))
						cout << "Player 2 Wins!\n";
					else if (((player1 == 's') || (player1 == 'S')) && ((player2 == 's') || (player2 == 'S')))
						cout << "It's a Tie!\n";
				}
				break;
		case(2):
			cout << "Displays player statistics\n";
			/*
			cout << "Player 1 Statistics: " << p1wins << "w-" << p1losses << "l-" << ties << "t\t"
				<< "Win ratio: " << p1wins / (p1wins + p1losses) << "%\n";
			cout << "Player 2 Statistics: " << p2wins << "w-" << p2losses << "l-" << ties << "t\t"
				<< "Win ratio: " << p2wins / (p2wins + p2losses) << "%\n";
			*/
			break;
		case(3):
			cout << "See you next time!\n";
			break;
		default:
			cout << "Error. That is not an option!\n";
	}
}
