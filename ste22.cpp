//File Name: ste22.cpp
//Author: Phong N
//Description: Self-Test Excersises 22 for Problem_Solving_with_C++_(9th_Savitch) chapter 2 page 83

#include <iostream>
#include <stdlib.h> // used for rand and srand
#include <time.h> // used for time
using namespace std;

int main()
{
    srand(time(NULL)); // initializes random seed using time
    int score = rand() % 200; // generates number between 0 and 200
    cout << score << endl;
    if (score >= 100) 
        cout << "High";
    else
        cout << "Low";

    return 0;
}
