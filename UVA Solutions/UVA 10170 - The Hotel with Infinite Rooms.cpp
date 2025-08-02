// Problem Name	: UVA 10170 - The Hotel with Infinite Rooms
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1111
// Vjudge.net  	: https://vjudge.net/problem/UVA-10170
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2016-12-09


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s,d;
    while(cin>>s>>d)
    {
        long long ans;

        while(d>0)
        {
            d-=s;
            ans=s;
            s++;

        }
        cout<<ans<<endl;
    }
}
