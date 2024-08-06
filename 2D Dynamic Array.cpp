#include<iostream>
using namespace std;
int main()
{
    ///We will make a [3][4] matrix in heap memory
    int i,j;
    int *p[3];
    p[0] = new int[4];
    p[1] = new int[4];
    p[2] = new int[4];

    ///Entering elements into matrix
    for(i=0; i<3; i++)
        for(j=0; j<4; j++)
            p[i][j] = 10 + j;

    ///Printing Elements
    for(i=0; i<3; i++)
    {
         for(j=0; j<4; j++)
            {
                cout << p[i][j] << " ";
            }
            cout << endl;
    }

    ///Deleting dynamically allocated memory
    for(i = 0; i < 3; i++)
    {
        delete[] p[i]; // Delete each array of integers
    }
}
