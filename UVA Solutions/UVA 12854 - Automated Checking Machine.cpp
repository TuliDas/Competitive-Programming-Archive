// Problem Name : UVA 12854 - Automated Checking Machine
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4719
// Vjudge.net  	: https://vjudge.net/problem/UVA-12854
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-09-27

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,aa,bb,cc,dd,ee;
    while(cin>>a>>b>>c>>d>>e>>aa>>bb>>cc>>dd>>ee)
    {


        int flag=1;

        if(a==aa)
            flag=0;

        if(b==bb)
            flag=0;
        if(c==cc)
            flag=0;

        if(d==dd)
            flag=0;

        if(e==ee)
            flag=0;

        if(flag==1)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }


    return 0;
}
