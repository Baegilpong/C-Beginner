//File Name: rps.cpp
//Author: Phong N
//Description: Programming Project for Problem_Solving_with_C++_(9th_Savitch) chapter 3 page 172
//Rock Paper Scissor 2 player game
//Rock beats scissors
//Scissors beats paper
//Paper beats rock
//If two players choose the same, No one wins

#include <iostream>
using namespace std;

int main()
{
	int p1wins = 0, p1losses = 0, p2wins = 0, p2losses = 0, ties = 0;
	char ans;

	cout << "***Phong's Rock Paper Scissors Game Version 1***\n"
		<< "How to play: \nThe choices are:\nR for Rock\nP for Paper\nS for Scissors\n";

	do
	{
		cout << "\nPlease select an option:\n1 to start game\n2 to see player statistics(under construction)\n";
		int choice;
		cin >> choice; 
		if (choice == 1)
		{
			char player1, player2;
			cout << "Enter Player 1 Choice: ";
			cin >> player1;
			cout << "Enter Player 2 Choice: ";
			cin >> player2;

			player1 = tolower(player1);
			player2 = tolower(player2);

			if ((player1 != 'r') && (player1 != 'p') && (player1 != 's'))
				cout << "Player 1 Choice Invalid\n";
			else if ((player2 != 'r') && (player2 != 'p') && (player2 != 's'))
				cout << "Player 2 Choice Invalid\n";
			else
			{
				//player1 selects rock
				if ((player1 == 'r') && (player2 == 'p'))
				{
					cout << "Player 2 Wins!\n";
					p1losses++;
					p2wins++;
				}
				else if ((player1 == 'r') && (player2 == 's'))
				{
					cout << "Player 1 Wins!\n";
					p1wins++;
					p2losses++;
				}

				//player1 selects paper
				if ((player1 == 'p') && (player2 == 'r'))
				{
					cout << "Player 1 Wins!\n";
					p1wins++;
					p2losses++;
				}
				else if ((player1 == 'p') && (player2 == 's'))
				{
					cout << "Player 2 Wins!\n";
					p1losses++;
					p2wins++;
				}

				//player1 selects scissors
				if ((player1 == 's') && (player2 == 'p'))
				{
					cout << "Player 1 Wins!\n";
					p1wins++;
					p2losses++;
				}
				else if ((player1 == 's') && (player2 == 'r'))
				{
					cout << "Player 2 Wins!\n";
					p1losses++;
					p2wins++;
				}
				else if (player1 == player2)
				{
					cout << "It's a Tie!\n";
					ties++;
				}
			}
		}
		else if (choice == 2)
		{
			if ((p1wins + p1losses == 0) && (ties == 0))
				cout << "No statistics!\n";
			else
			{
				cout << "Player 1 Statistics: " << p1wins << "w-" << p1losses << "l-" << ties << "t\t"
					<< "Win ratio: " << (p1wins * 100) / (p1wins + p1losses) << "%\n";
					cout << "Player 2 Statistics: " << p2wins << "w-" << p2losses << "l-" << ties << "t\t"
					<< "Win ratio: " << (p2wins * 100) / (p2wins + p2losses) << "%\n";
			}
		}
		else
			cout << "Error. That is not an option!\n";

		cout << "Continue? Enter Y for Yes or N for No\n";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');


	cout << "See you next time!\n";
}