// Creating a 2D Array
#include<iostream>

using namespace std;

int main()
{
    int numgrid[3][2] = {
        {7, 8},
        {4, 9},
        {5, 2}
    };

    for (int i = 0; i < 3; i++)
    {    for (int j = 0; j < 2; j++)
         {
             cout << numgrid[i][j] << " ";
         }
    cout << endl;
    }
}