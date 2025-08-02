// Problem Name : UVA 12293 - Box Game
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3714
// Vjudge.net  	: https://vjudge.net/problem/UVA-12293
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-10-13


#include<bits/stdc++.h>
using namespace std;
map <long long,bool> mp;
int main()
{
    mp.clear();
    long long t=1;
    for(int i=1;i<32;i++)
    {

        mp[t]=true;
        t=t*2+1;
    }

    int n;

    while(cin>>n)
    {
        if(n==0)
            break;
        if(mp[n]==true)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }

    return 0;

}




