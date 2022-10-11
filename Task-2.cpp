#include<iostream>
using namespace std;
string encode(string s, int j)
{
    string s2;
    for(int i=2; i<s.length(); i+=j)
    {
        int x = int(s[i]);
        s2[i]= char(x+2);
        s[i]=s2[i];
        i+=1;
    }
    return s;
}
int main()
{
    string s1 = "I am a student";
    string s2= encode(s1, 2);

    for(int i=0; i<s2.length(); i++)
    {
        cout<<s2[i];
    }

    return 0;
}
