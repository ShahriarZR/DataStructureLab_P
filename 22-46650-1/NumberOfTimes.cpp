#include<iostream>
using namespace std;
int main()
{
    int Array_1[10] = {8,4,6,1,6,9,6,1,9,8};
    int i, j, p=0;

    for(i=0; i<10; i++)
    {
        p++;
        for(j=1; j<10; j++)
        {
            if (Array_1[i] == Array_1[j])
            {
                p++;
            }
        }
        cout<<Array_1[i]<<" occurs = "<<p<<" times"<<endl;
        p=0;
    }

    return 0;
}
