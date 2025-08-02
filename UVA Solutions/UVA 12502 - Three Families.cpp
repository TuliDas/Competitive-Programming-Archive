/*
Problem Name	: UVA 12502 - Three Families
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3946
Language	    : C++
Solved on   	: 2016-02-27
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        double a,b,c;
        double m,result;

        scanf("%lf %lf %lf",&a,&b,&c);

        m=c/(a+b);

        if(a>b)
        {
            result= (m*a) + (a-b)*m;
        }
        else if(b>a)
        {
          result= (m*a) - (b-a)*m;
        }

        else if(a=b)
        {
            result= (m*a);
        }


        printf("%.0lf\n",result);


    }
    return 0;
}
