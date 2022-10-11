#include <iostream>
using namespace std;
int main()
{
    int matrix_1[3][4] = {1, 6, 7, 9, 2, 4, 8, 5, 3, 1, 9, 4};
    int row, col, i;

    for(row = 0; row<4; row++)
    {
        for(col = 0; col<3; col++)
        {
            cout<<matrix_1[col][row]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
