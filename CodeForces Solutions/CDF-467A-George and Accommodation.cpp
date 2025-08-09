/*
Problem Name : CDF-467A-George and Accommodation
Problem Link : https://codeforces.com/contest/467/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,cnt=0;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            cin>>a>>b;
            if(b-a>=2)
                cnt++;
        }
        cout<<cnt<<endl;
    }

}



 
