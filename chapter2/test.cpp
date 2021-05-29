//File Name: pge.cpp
//Author: Phong N
//Description: Programming Example for Problem_Solving_with_C++_(9th_Savitch) chapter 2 page 89

#include <iostream>
using namespace std;

int main()
{
    double balance, interest, limit;
    int months = 0;
    cout << "Enter balance owed: ";
    cin >> balance;
    cout << "\n Enter interest per month in %: ";
    cin >> interest;
    interest *= .01;
    cout << "\n Enter balanced owed limit: ";
    cin >> limit;

    while (balance < limit)
    {
        balance += balance * interest;
        months++;
    }

    cout << "\n Number of months until limit is reached: " << months;
    return 0;
}