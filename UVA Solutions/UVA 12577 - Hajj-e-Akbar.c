/*
Problem Name	: UVA 12577 - Hajj-e-Akbar
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=4022
Language	    : C
Solved on   	: 2016-02-27
*/

#include<stdio.h>
#include<string.h>


int main()
{
    char s[20];
    int i;
    i=1;

    while(gets(s))
    {
        if(strcmp(s,"*")==0)
        {
            break;
        }

        if(strcmp(s,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }

        else if(strcmp(s,"Umrah")==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
    }

    return 0;
}
