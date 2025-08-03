/*
Problem Name : CDF-486A-Calculating Function
Problem Link : https://codeforces.com/contest/486/problem/A
Vjudge.net   : https://vjudge.net/problem/CodeForces-486A
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-10-04
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n%2==0)
            cout<<n/2<<endl;
        else
        {

            cout<<"-"<<(n/2)+1<<endl;

        }

    }

}




 
