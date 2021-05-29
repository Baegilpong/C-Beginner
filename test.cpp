#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int score = rand() % 200;
    cout << score << endl;
    if (score >= 100)
        cout << "High";
    else
        cout << "Low";

    return 0;
}