/*
Problem Name	: UVA 12626-I love Pizza
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=4349
Language	: C++
Solved on   	: 2016-03-05
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char s[605];
        int i,l,M,A,R,G,I,T,j;
        j=0;
        M=0;
        A=0;
        R=0;
        G=0;
        I=0;
        T=0;

        scanf("%s",&s);
        l=strlen(s);

        for(i=0; i<l; i++)
        {
            if(s[i]=='M')
            {
                M++;
            }
            else if(s[i]=='A')
            {
                A++;
            }
            else if(s[i]=='R')
            {
                R++;
            }
            else if(s[i]=='G')
            {
                G++;
            }
            else if(s[i]=='I')
            {
                I++;
            }
            else if(s[i]=='T')
            {
                T++;
            }

            if(M>=1 && A>=3 && R>=2 && G>=1 && I>=1 && T>=1)
            {
                j++;
                M=M-1;
                A=A-3;
                R=R-2;
                G=G-1;
                I=I-1;
                T=T-1;
            }

        }

        printf("%d\n",j);

    }
    return 0;
}
