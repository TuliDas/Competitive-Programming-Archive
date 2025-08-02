// Problem Name: UVA 445 - Marvelous Mazes
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=386
// Vjudge.net  	: https://vjudge.net/problem/UVA-445
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2016-11-13

#include<bits/stdc++.h>
using namespace std;


int main()
{
    // string ss,s;
    char s[200];

    while(gets(s))
    {
        int x;
        x=0;
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]=='\n')
                printf("\n");
            if(s[i]=='!')
            {
                printf("\n");
            }

            else if(s[i]>='0' && s[i]<='9')
            {
                x+= s[i]-'0';
            }

            else if(s[i]=='b')
            {

                while(x--)
                    printf(" ");

                x=0;

            }
            else
            {
                while(x--)
                    cout<<s[i];

                x=0;
            }

        }
        printf("\n");
    }
}


