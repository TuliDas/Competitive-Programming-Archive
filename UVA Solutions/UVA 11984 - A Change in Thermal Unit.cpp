/*
Problem Name	: UVA 11984 - A Change in Thermal Unit
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3135
Language	    : C++11
Solved on   	: 2017-03-15
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int tc,kase=1;
  cin>>tc;
  while(tc--)
  {
      double n1,n2,ans;
      cin>>n1>>n2;
      n1 = (9.0/5.0)*n1 + 32.0 + n2;
      ans= ((n1-32.0)/9.0 )*5;
      printf("Case %d: %.2lf\n",kase++,ans);

  }
}
