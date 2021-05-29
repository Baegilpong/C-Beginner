//File Name: pge.cpp
//Author: Phong N
//Description: Programming Example for Problem_Solving_with_C++_(9th_Savitch) chapter 2 page 89
//Gets balance owed of credit card, interest per month as a %, and balance limit.
//Calculates how many months will pass until the balance reaches the balance limit.

#include <iostream>
using namespace std;

int main()
{
    double balance, interest, limit;
    int months = 0;
    cout << "Enter balance owed: ";
    cin >> balance;
    cout << "Enter interest per month in %: ";
    cin >> interest;
    interest *= .01;
    cout << "Enter balanced owed limit: ";
    cin >> limit;

    while (balance < limit)
    {
        balance += balance * interest;
        months++;
    }

    cout << "Number of months until limit is reached: " << months;
    cout << "\nThe balance will be: $" << balance;
    return 0;
}
