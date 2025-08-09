/*
Problem Name : CDF-686A-Free Ice Cream
Problem Link : https://codeforces.com/contest/686/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jun/29/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,s,c,i,k;
    char z;
    while(cin>>n>>k)
    {
        c=0;
        s=k;
        for(i=0;i<n;i++)
        {
            cin>>z>>x;
            if(z=='-')
            {
                if(x>s)
                    c++;
                else
                    s=s-x;
            }
            else if(z=='+')
                s=s+x;

        }
        cout<<s<<" "<<c<<endl;

    }
    return 0;
}



 
