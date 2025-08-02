// Problem Name : UVA 10038 - Jolly Jumpers
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=979
// Verdict	    : Accepted
// Language	    : C++11
// Solved on   	: 2017-02-27

#include<stdio.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {

        int ara[3005],pra[3005];
      for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);

     // sort(ara,ara+n);

      bool flag=true;
int i;
      for(i=0;i<n-1;i++)
      {
          pra[i]=abs(ara[i+1]-ara[i]);
      }
      sort(pra,pra+i);
      for(int i=1;i<n;i++)
      {
          if(pra[i]==pra[i-1])
          {
              flag=false;
              break;
          }
      }

      if(flag)
        printf("Jolly\n");
      else
        printf("Not jolly\n");
    }
    return 0;
}
