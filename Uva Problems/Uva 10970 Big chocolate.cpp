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
