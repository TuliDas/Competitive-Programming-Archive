/*
Problem Name : CDF-579A-Raising Bacteria
Problem Link : https://codeforces.com/problemset/problem/579/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/10/2016
*/

#include<bits/stdc++.h>
using namespace std;
set <int> st;
int main()
{
    long long int n;
    while(cin>>n)
    {
     //   long double a;
        long long int a,p,cnt=0;
        while(true)
        {
            if(n==0)
                break;
            if(n==1)
            {
                cnt++;
                break;
            }

            a = log2(n);
            //cout<<"a = "<<a<<endl;


            //cout<<"p = "<<a<<endl;

            n= n- powl(2,a);
            cnt++;
            //cout<<n<<endl;
        }
        cout<<cnt<<endl;
    }
    //cout<<log(5)/log(2)<<endl;
}


