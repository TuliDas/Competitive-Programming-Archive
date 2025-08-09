/*
Problem Name : CDF-112A-Petya and Strings
Problem Link : https://codeforces.com/contest/112/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/22/2016
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {

        transform(s1.begin(), s1.end(),s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(),s2.begin(), ::tolower);
        if(s1<s2)
            cout<<"-1"<<endl;
        else if(s2<s1)
            cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }

    return 0;
}
