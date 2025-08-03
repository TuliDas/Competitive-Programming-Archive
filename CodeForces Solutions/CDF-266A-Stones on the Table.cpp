/*
Problem Name : CDF-266A-Stones on the Table
Problem Link : https://codeforces.com/problemset/problem/266/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-12-09
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        string s;
        int cnt=0;
        cin>>s;
    int index=0;

        for(int i=1;i<n;i++)
        {
            if(s[index]==s[i])
            {
                cnt++;
            }
            else
                index=i;
        }
        cout<<cnt<<endl;

    }
}
