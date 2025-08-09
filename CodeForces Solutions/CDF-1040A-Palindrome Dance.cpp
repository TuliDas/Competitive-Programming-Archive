/*
Problem Name : CDF-1040A-Palindrome Dance
Problem Link : https://codeforces.com/contest/1040/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/08/2018
*/

#include<bits/stdc++.h>
using namespace std;
int ara[25];

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    cin>>ara[i];

    int mx,mi,cost=0,sz=n-1;

     mi= min(a,b);
     int i1,i2;
     bool flag=true;

    for(int i=0;i<=sz/2;i++)
    {

      if(ara[i]!=2 && ara[sz-i]!=2 && ara[i]!= ara[sz-i])
     {
           flag=false;
           break;
     }
      else if( i ==  sz-i)
      {
          if(ara[i]==2)
          cost += mi ;
      }

     else if(ara[i]==2 && ara[sz-i]==2)
     {
         //cout<<"y"<<endl;
         cost = cost + mi*2;
     }
     else if(ara[i]==ara[sz-i]) continue;

     else
     {
        if(ara[i]!=2)
        {
            if(ara[i]==1) cost+=b;
            else cost+=a;
        }
         else
         {
            if(ara[sz-i]==1) cost+=b;
            else cost+=a;
         }

     }


    }
    if(flag)
        cout<<cost<<endl;
    else cout<<"-1"<<endl;

}
