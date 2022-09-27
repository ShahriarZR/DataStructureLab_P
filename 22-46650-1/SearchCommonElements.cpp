#include<iostream>
using namespace std;
int main()
{
    int Array_1[7]={1,4,6,3,8,9,1};
    int ChangedArray_1[7];
	int i, j, n=0, p=0;

	for(i=0; i<7; i++)
    {
        for(j=0; j<7; j++)
        {
            if (Array_1[i] == Array_1[j])
            {
                n++;
                break;
            }
            if(i==j)
            {
                ChangedArray_1[i] = Array_1[i];
                p++;
                cout<<p<<endl;
            }
        }
    }

    if (p!=0)
    {
        for(i=0; i<p; i++)
        {
            cout<<ChangedArray_1[i]<<" ";
        }
    }
    else
    {
        cout<<"Array already unique!";
    }


    return 0;
}
