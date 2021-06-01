//File Name: pracpgm297.cpp
//Author: Phong N
//Description: Practice Program for Problem_Solving_with_C++_(9th_Savitch)
// chapter 5 page 297
//Write a program that reads in a length in feet and inches and outputs the 
//equivalent length in meters and centimeters. Use at least three functions: 
//one for input, one or more for calculating, and one for output. Include a 
//loop that lets the user repeat this computation for new input values until 
//the user says he or she wants to end the program. There are 0.3048 meters 
//in a foot, 100 centimeters in a meter, and 12 inches in a foot.

#include <iostream>
using namespace std;

const double M_IN_FT = 0.3048; //meters in feet
const int INCH_IN_FT = 12; //inches in feet

void readLength(double& temp);
//Precondition: user inputs a length in feet and inches.
//Postcondition: Reads the input and converts it to feet only

void convert(double& m, double& cm);
//Postcondition: Converts user input feet only to centimeters
//then converts centimeters into meters and centimeters

void displayanswer(double m, double cm);
//Postcondition: Displays answer of the calculation

int main()
{
    char ans;
    double meters = 0, cm = 0;
    do
    {
        readLength(meters);
        convert(meters, cm);
        displayanswer(meters, cm);

        cout << "Continue? Enter y for yes\n";
        cin >> ans;
    } while (ans =='y' || ans=='Y');
   
    return 0;
}

void readLength(double& temp)
{
    double feet = 0, inches = 0;

    cout << "Input length...\n"
         << "Feet: ";
    cin >> feet;

    cout << "Inches: ";
    cin >> inches;

    inches /= INCH_IN_FT;
    temp = feet + inches;
    cout << temp << " feet in meters is:\n";
}

void convert(double& m, double& cm)
{
    m *= M_IN_FT;
    cm = m * 100;
    cm -= 100;
    m -= (cm / 100);
}

void displayanswer(double m, double cm)
{
    cout << m << " meters and "
         << cm << "centimeters.\n";
}
