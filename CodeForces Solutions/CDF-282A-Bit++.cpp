/*
Problem Name : CDF-282A-Bit++
Problem Link : https://codeforces.com/contest/282/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/20/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s[155];
    while(cin>>n)
    {

        int a=0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];

            if((s[i][0]=='+' && s[i][1]=='+') || (s[i][2]=='+' && s[i][1]=='+'))
                a++;
            else if((s[i][0]=='-' && s[i][1]=='-') || (s[i][2]=='-' && s[i][1]=='-'))
                a--;
        }
        cout<<a<<endl;
    }
}
