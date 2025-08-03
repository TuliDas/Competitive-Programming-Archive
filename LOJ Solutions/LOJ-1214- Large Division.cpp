/*
NUMBER THEORY
Problem Name : LOJ-1214- Large Division
Problem Link : https://lightoj.com/problem/large-division
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-04-03
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    long int divi,n,a,st;;
    string num;

    scanf("%d",&tc);

    for(int t=1; t<=tc; t++)
    {
        cin>>num;
        cin>>divi;

        if(num[0]>='0' && num[0]<='9')
            st=0;
        else st=1;

        n=0;
        for(st=st; st<num.size(); st++)
        {
            a=num[st]-'0';
            n=(n*10)+a;
            n=n%divi;
        }

        if(n==0)
            printf("Case %d: divisible\n",t);
        else
            printf("Case %d: not divisible\n",t);
    }
}
