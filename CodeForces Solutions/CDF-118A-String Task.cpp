/*
Problem Name : CDF-118A-String Task
Problem Link : https://codeforces.com/problemset/problem/118/A
Vjudge.net   : https://vjudge.net/problem/CodeForces-118A
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-12-09
*/

#include<bits/stdc++.h>
using namespace std;

char vowel[6]={'a','e','i','o','u','y'};

bool check(char a)
{
    for(int i=0;i<6;i++)
    {
        if(a==vowel[i])
            return false;
    }
    return true;
}
int main()
{
    long long int i;
    string s,ss;
    while(cin>>s)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
            if(check(s[i]))
                cout<<"."<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
