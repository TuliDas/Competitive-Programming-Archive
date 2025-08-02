// Problem Name: UVA 11479 - Is this the easiest problem
// Prolem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2474
//Language	: C++
//Solved on   	: 2016-03-01

#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,i;
    i=1;
    scanf("%d",&n);

    while(n--)
    {
        int a[3];
        int j;
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[j]);
        }

        sort(a,a+3);

        if((a[0]+a[1])<=a[2])
        {
            printf("Case %d: Invalid\n",i);
        }
        else if(a[0]==a[1] && a[1]==a[2])
        {
            printf("Case %d: Equilateral\n",i);
        }
        else if(a[0]!=a[1] && a[1]!=a[2])
        {
            printf("Case %d: Scalene\n",i);
        }
        else if(a[0]==a[1] || a[1]==a[2])
        {
            printf("Case %d: Isosceles\n",i);
        }

        i++;
    }

    return 0;
}

