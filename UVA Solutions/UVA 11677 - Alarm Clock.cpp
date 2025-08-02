/*
Problem Name	: UVA 11677 - Alarm Clock
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2724
Vjudge.net  	: https://vjudge.net/problem/UVA-11677
Language	    : C++11
Solved on   	: 2017-04-15
*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h1,m1,h2,m2;
    while(cin>>h1>>m1>>h2>>m2)
    {
        int ans;
        if(h1==0 && m2==0 && h2==0 && m2==0)
            break;
            if(h1==h2 && m1==m2)
            ans= 24*60;

            else if(h1==h2 && m1>m2)
            ans= (24*60) - (m1-m2);
        else if(h1==h2 && m1<m2)
            ans=(m2-m1);
          else if(h1<h2 && m1>m2)
            ans= (h2-h1 - 1)*60 + 60-m1 + m2;
        else if(h1<h2 && m1<=m2)
            ans= (h2-h1)*60 + m2-m1;
        else if(h1>h2 && m1<=m2)
        {
            ans= (24-h1 + h2)*60 + m2-m1;
        }
        else if(h1>h2 && m2<m1)
        {
            ans= (24-h1 + h2-1)*60 + 60-m1+m2;
        }
        cout<<ans<<endl;

    }
}



