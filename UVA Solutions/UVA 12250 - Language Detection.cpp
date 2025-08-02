// Problem Name : UVA 12250 - Language Detection
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3402
// Vjudge.net  	: https://vjudge.net/problem/UVA-12250
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-09-29

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int kase=1;
    string s;
    while(cin>>s)
    {
        if(s=="#")
            break;

        else if(s=="HELLO")
            printf("Case %d: ENGLISH\n",kase++);

             else if(s=="HOLA")
            printf("Case %d: SPANISH\n",kase++);

             else if(s=="HALLO")
            printf("Case %d: GERMAN\n",kase++);



             else if(s=="BONJOUR")
            printf("Case %d: FRENCH\n",kase++);

             else if(s=="CIAO")
            printf("Case %d: ITALIAN\n",kase++);

             else if(s=="ZDRAVSTVUJTE")
            printf("Case %d: RUSSIAN\n",kase++);

            else
                printf("Case %d: UNKNOWN\n",kase++);


    }
}
