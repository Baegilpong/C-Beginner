//File Name: pp1.cpp
//Author: Phong N
//Description: Programming Project for Problem_Solving_with_C++_(9th_Savitch) chapter 2 page 105
/*
A government research lab has concluded that an artificial sweetener
commonly used in diet soda pop will cause death in laboratory mice. A
friend of yours is desperate to lose weight but cannot give up soda pop.
Your friend wants to know how much diet soda pop it is possible to drink
without dying as a result. Write a program to supply the answer. The input
to the program is the amount of artificial sweetener needed to kill a mouse
(use 5 grams), the mass of the mouse (use 35 grams), and the weight of
the dieter (use 45400 grams for a 100 pound person). Assume that the
lethal dose for a mouse is proportional to the lethal dose for the human.
A single can of soda pop has a mass of 350 grams. To ensure the safety of
your friend, be sure the program requests the weight at which the dieter
will stop dieting, rather than the dieter’s current weight. Assume that diet
soda contains 1/10th of 1% artificial sweetener. Use a variable declaration
with the modifier const to give a name to this fraction. You may want to
express the percent as the double value 0.001. Your program should allow
the calculation to be repeated as often as the user wishes.
*/
#include <iostream>
using namespace std;

int main()
{
    const int GRAMS_PER_POUND = 454;
    const double MOUSE_LETHAL = (5.0 / 35), DOSE_PER_SODA = (0.001 * 350);

    double weight, lethal;
    int num_soda = 0;

    cout << "Enter weight in pounds at end of diet (To terminate enter a negative number): ";
    cin >> weight;
    if (weight < 0)
    {
        cout << "Error Negative Weight";
        return 0;
    }
    else
    {
        weight *= GRAMS_PER_POUND;
        lethal = MOUSE_LETHAL * weight;
        num_soda = lethal * DOSE_PER_SODA;

        cout << "Maximum number of soda : " << num_soda << " cans\n";
    }

    return main();
}