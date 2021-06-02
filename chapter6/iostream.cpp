//File Name: iostream.cpp
//Author: Phong N
//Description: IO Stream test program
//Will read three numbers from infile.txt and create outfile.txt
//with numbers in infile.txt printed.

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream in_stream;
    ofstream out_stream;

    in_stream.open("infile.txt");
    if(in_stream.fail())
    {
        cout << "Input file opening failed \n";
        exit(1);
    }
    out_stream.open("outfile.txt");
    if(out_stream.fail())
    {
        cout << "Output file opening failed \n";
        exit(1);
    }
    int num1, num2, num3;

    in_stream >> num1 >> num2 >> num3;

    out_stream << "first number = " << num1
               << "\nsecond number = " << num2
               << "\nthird number = " << num3;
               
    in_stream.close();
    out_stream.close();

    return 0;
}
