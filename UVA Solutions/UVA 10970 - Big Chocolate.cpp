// Problem Name	: UVA 10970 - Big Chocolate
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1911
// Verdict	: Accepted
// Language	: C
// Solved on   	: 2016-03-04

#include<stdio.h>

int main()

{
    int m,n,c,i;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
      c=m-1;

      for(i=0;i<m;i++)
      {
          c=c+n-1;
      }
     printf("%d\n",c);
    }
    return 0;
}
