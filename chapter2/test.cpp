//File Name: pracpgm103.cpp
//Author: Phong N
//Description: Practice Program  for Problem_Solving_with_C++_(9th_Savitch) chapter 2 page 103
//A metric ton is 35, 273.92 ounces.Write a program that will read the weight
//of a package of breakfast cereal in ounces and output the weight in metric
//tons as well as the number of boxes needed to yield 1 metric ton of cereal.
//Your program should allow the user to repeat this calculation as often as
//the user wishes.
#include <iostream>
using namespace std;

const double OUNCES_PER_TON = 35273.92;

int main()
{
    double ounces; 
    double boxes_per_ton;
    cout << "Enter the weight of a package of breakfast cereal in ounces: \n";

    cin >> ounces;
    cout << ounces / OUNCES_PER_TON << " tons\n";
    
    boxes_per_ton = OUNCES_PER_TON / ounces;
    cout << "It takes " << boxes_per_ton << " boxes to yield 1 metric ton of cereal.\n";

    return 0;
}