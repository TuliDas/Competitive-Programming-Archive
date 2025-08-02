/*
Problem Name	: UVA 11734 - Big Number of Teams will Solve This
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2834
Language	    : C
Solved on   	: 2016-10-19
*/


#include<stdio.h>
#include<string.h>


int main()

{
    int n,i;
    i=1;
    scanf("%d",&n);
    while(n--)
    {
        int length_s,length_t;
        char s[20],t[20];

        gets(s);
        gets(t);
        length_s= strlen(s);
        length_t= strlen(t);

        if(strcmp(s,t)==0)
        {
            printf("Case %d: Yes\n",i);
        }

        else if(length_s!=length_t)
        {
            printf("Case %d: Output Format Error\n",i);
        }

        else
        {
            printf("Case %d: Wrong Answer\n",i);
        }
        i++;
    }

    return 0;
}
