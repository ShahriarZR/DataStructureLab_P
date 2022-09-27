#include<iostream>
using namespace std;
int main()
{
    int Array_1[10]={8,4,6,1,6,9,6,1,9,8};
    int i, n, x=0;
    cout<<"Enter An Integer to search: "<<endl;
    cin>>n;

    for(i=0; i<10; i++)
    {
        if(n == Array_1[i])
        {
            x++;
        }
    }
    if(x!=0)
    {
        cout<<"The number occurs "<<x<<" times in the array"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }

    return 0;
}
