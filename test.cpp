//File Name: ste22.cpp
//Author: Phong N
//Description: Self-Test Excersises 22 for Problem_Solving_with_C++_(9th_Savitch) chapter 2 page 83

#include <iostream>
using namespace std;

int main()
{
    double savings = 0, expenses = 0;
    cout << "Enter savings\n";
    cin >> savings;
    cout << "Enter expenses \n";
    cin >> expenses;
    
    if (savings >= expenses)
    {
        cout << "Solvent\n";
        savings -= expenses;
        expenses = 0;
    }
    else
        cout << "Bankrupt\n";

    // cout << savings << " " << expenses;

    return 0;
}