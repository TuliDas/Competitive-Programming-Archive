/*
Problem Name : CDF-747A-Display Size
Problem Link : https://codeforces.com/contest/747/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jan/15/2017
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int root,m,ans,a,b;

        root = sqrt(n);
        while(true)
        {
            if(n%root==0)
            {
                a= root;
                b= n/ root;
                break;
            }
            root--;
        }
        cout<<a<<" "<<b<<endl;
    }

}
