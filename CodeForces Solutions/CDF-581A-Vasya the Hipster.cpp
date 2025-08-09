/*
Problem Name : CDF-581A-Vasya the Hipster
Problem Link : https://codeforces.com/contest/581/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/17/2016
*/

#include<bits/stdc++.h>
using namespace std;
map <char,int> mp1,mp;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
       int c;

       if(a==b)
         {
             cout<<a<<" "<<"0"<<endl;
         }
       else
       {
           c= min(a,b);
           cout<<c<<" ";
           c= (max(a,b)-min(a,b))/2;
           cout<<c<<endl;
       }




    }

}

 
