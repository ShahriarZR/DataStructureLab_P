#include<iostream>
using namespace std;
int main()
{
    int Array_1 [5]={10,20,30,40,50};
    int Array_2[8]={1,2,3,4,5,6,7,8};
    int MergeArray[13];
	int i;


    for(i=0; i<5; i++)
    {
        MergeArray[i] = Array_1[i];
    }
    for(i=0; i<8; i++)
    {
        MergeArray[i+5] = Array_2[i];
    }

    for(i=12; i>=0; i--)
    {
        cout<<MergeArray[i]<<" ";
    }
    return 0;
}
