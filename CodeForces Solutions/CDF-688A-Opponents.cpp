/*
Problem Name : CDF-688A-Opponents
Problem Link : https://codeforces.com/contest/688/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jun/29/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,m,t,k,mm,a;
    string s[105];
    while(cin>>n>>m)
    {
        mm=0;
        a=0;
        for(i=0; i<m; i++)
        {
            cin>>s[i];
        }

        for(j=0; j<m; j++)
        {
            t=0;
            for(k=0; k<n; k++)
            {

                if(s[j][k]=='1')
                    t++;
            }

            if(t<n)
            {
                a++;
                if(a>=mm)
                    mm=a;
            }

            else
            {
                a=0;
            }
        }
        cout<<mm<<endl;
    }
    return 0;
}
 
