/*
Problem Name : CDF-59A-Word
Problem Link : https://codeforces.com/problemset/problem/59/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jun/26/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        long long int i,j,u,l;
        u=0;
        l=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]<'a')
                u++;
            else
                l++;
        }
        if(u>l)
            transform(s.begin(),s.end(),s.begin(), :: toupper);
        else
            transform(s.begin(),s.end(),s.begin(), :: tolower);

        cout<<s<<endl;

    }
    return 0;
}
