/*
Problem Name : CDF-584A-Olesya and Rodion
Problem Link : https://codeforces.com/contest/584/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  while(cin>>n>>m)
  {
      if(n==1 && m==10)
        cout<<"-1";
      else
      {
          if(m<10)
          {
              while(n--)
                cout<<m;
          }
          else
          {
              n--;
              cout<<"1";
              while(n--)
                cout<<"0";
          }
      }
      cout<<endl;

  }

}
 
