//File Name: iostream.cpp
//Author: Phong N
//Description: IO Stream test program
//Will read three numbers from infile.txt and create outfile.txt
//with numbers in infile.txt printed.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in_stream;
    ofstream out_stream;

    in_stream.open("infile.txt");
    out_stream.open("outfile.txt");

    int num1, num2, num3;

    in_stream >> num1 >> num2 >> num3;

    out_stream << "first number = " << num1
               << "\nsecond number = " << num2
               << "\nthird number = " << num3;

    return 0;
}