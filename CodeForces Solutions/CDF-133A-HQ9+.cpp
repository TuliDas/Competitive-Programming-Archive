/*
Problem Name : CDF-133A-HQ9+
Problem Link : https://codeforces.com/contest/133/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/20/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    while(cin>>n)
    {
     bool flag=false;
     int a;

     for(int i=0;i<n.size();i++)
     {

         //cout<<n[i]<<" ..... "<<int(n[i])<<endl;
         if(n[i]=='H' || n[i]=='Q' || n[i]=='9')
         {
             flag=true;
             break;
         }

     }
     if(flag)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
    }
    return 0;
}
 
