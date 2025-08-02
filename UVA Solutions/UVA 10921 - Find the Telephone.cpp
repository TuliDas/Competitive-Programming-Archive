// Problem Name	: UVA 10921 - Find the Telephone
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1862
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2016-03-03

#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char s[31];
    while(scanf("%s",&s)!=EOF)
    {
        char a;
        int l,i;
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]=='A' || s[i]=='B' || s[i]=='C')
            {
                printf("2");
            }

            else if(s[i]=='D' || s[i]=='E' || s[i]=='F')
            {
                printf("3");
            }

            else if(s[i]=='G' || s[i]=='H' || s[i]=='I')
            {
                printf("4");
            }
            else if(s[i]=='J' || s[i]=='K' || s[i]=='L')
            {
                printf("5");
            }
            else if(s[i]=='M' || s[i]=='N' || s[i]=='O')
            {
                printf("6");
            }
            else if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S')
            {
                printf("7");
            }

            else if(s[i]=='T' || s[i]=='U' || s[i]=='V')
            {
                printf("8");
            }

            else if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z')
            {
                printf("9");
            }
            else if(s[i]>='0' || s[i]<=9)
            {
                printf("%c",s[i]);
            }

            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}

