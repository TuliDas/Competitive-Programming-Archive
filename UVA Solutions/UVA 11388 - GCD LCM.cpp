/*
Number Theory
Problem Name	: UVA 11388 - GCD LCM
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2383
Vjudge.net  	: https://vjudge.net/problem/UVA-11388
Verdict	        : Accepted
Language	    : C++11
Solved on   	: 2018-04-02
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,gcd,lcm;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d",&gcd,&lcm);
        if(lcm%gcd==0)
            cout<<gcd<<" "<<lcm<<endl;
        else cout<<"-1"<<endl;
    }
}

