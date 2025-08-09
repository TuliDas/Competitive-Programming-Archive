/*
Problem Name : CDF-39H-Multiplication Table
Problem Link : https://codeforces.com/contest/39/problem/H
Language     : C++
Verdict      : ACCEPTED
Solved On    : Oct/25/2016
*/

#include<bits/stdc++.h>
using namespace std;

//Decimal to other bases
int fromDecimal(int n, int b)
{
   int result=0;
   int multiplier=1;
   while(n>0)
   {
      result+=n%b*multiplier;
      multiplier*=10;
      n/=b;
   }
   return result;
}

int main()
{
    int k;
    cin>>k;
    for(int i=1;i<=k-1;i++){
        for(int j=1;j<=k-1;j++){
            if(j==1) cout<<i<<" ";
            else cout<<fromDecimal(i*j,k)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
