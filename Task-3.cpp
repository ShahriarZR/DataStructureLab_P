#include<iostream>
using namespace std;
int main()
{
    float student[10][3]={{1000,48,3.85},
    {1001,40,2.85},
    {1002,44,3.55},
    {1003,50,1.85},
    {1004,110,3.75},
    {1005,115,3.88},
    {1006,54,3.99},
    {1007,64,3.50},
    {1008,98,3.44},
    {1009,89,3.70}};
    int row,col;

    for (row=0; row<9; row++)
    {
        if (col==3)
        {
            if(student[row][col]>3.75)
            {
                cout<<student[row][0]<<endl;
            }
        }
    }
    return 0;
}
