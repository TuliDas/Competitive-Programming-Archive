// Problem Name : UVA 11849 - CD
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2949
// Vjudge.net  	: https://vjudge.net/problem/UVA-11849
// Verdict      : Accepted
// Language     : C++
// Solved on    : 2017-03-23

#include<bits/stdc++.h>
using namespace std;
map <long long int,bool> mp;
int main()
{
    long long int n,m;
    while(cin>>n>>m)
    {
        mp.clear();
        if(n==0 && m==0)
            break;
            long long int num;
        while(n--)
        {
            cin>>num;
            mp[num]=true;
        }
        long long int ans=0;
        while(m--)
        {
            cin>>num;
            if(mp[num]==true)
                ans++;
        }
        cout<<ans<<endl;

    }
}
