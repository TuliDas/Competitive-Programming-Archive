/*
Problem Name	: UVA 11498 - Division of Nlogonia
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2493
Vjudge.net  	: https://vjudge.net/problem/UVA-11498
Language	    : C++11
Solved on   	: 2017-05-06
*/

#include<bits/stdc++.h>
using namespace std;
int k,x,y,n,m;
int xx,yy;
int main()
{
    while(true)
    {
        cin>>k;
        if(k==0) break;
        cin>>n>>m;
        while(k--)
        {
            cin>>x>>y;

            if(x==n || y==m)
                cout<<"divisa"<<endl;
            else if(x<n && y>m)
                cout<<"NO"<<endl;
            else if(x<n && y<m) cout<<"SO"<<endl;
            else if(x>n && y<m) cout<<"SE"<<endl;
            else cout<<"NE"<<endl;
        }
    }


    return 0;
}

