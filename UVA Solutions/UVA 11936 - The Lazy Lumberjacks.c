/*
Problem Name	: UVA 11936 - The Lazy Lumberjacks
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3087
Language	    : C
Solved on   	: 2016-02-27
*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);

        if((a+b)>c && (b+c)>a && (c+a)>b)
        {
            printf("OK\n");
        }
        else
        {
            printf("Wrong!!\n");
        }
    }
    return 0;
}

