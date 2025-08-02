// Problem Name	: UVA 11172 - Relational Operator
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2113
// Vjudge.net   : https://vjudge.net/problem/UVA-11172
// Verdict	    : Accepted
// Language	    : C++
// Solved on   	: 2015-12-25

#include<bits/stdc++.h>
using namespace std;
int tc;
int main()
{
    cin>>tc;
    while(tc--)
    {
        long long int a,b;
        cin>>a>>b;
        if(a<b) cout<<"<"<<endl;
        else if(a>b) cout<<">"<<endl;
        else cout<<"="<<endl;
    }

    return 0;
}


