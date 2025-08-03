/*
Problem Name : CDF-237A-Free Cash
Problem Link : https://codeforces.com/problemset/problem/237/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-12-09
*/

#include<bits/stdc++.h>
using namespace std;
map <pair<int,int> , int > mp;
pair <int,int> p;
int main()
{
    int n,h,m;
    while(cin>>n)
    {
        int mxx=0;
        mp.clear();
        for(int i=0;i<n;i++)
        {
            cin>>h>>m;
            p= make_pair(h,m);
            mp[p]++;
            mxx= max(mxx,mp[p]);
        }
        cout<<mxx<<endl;
    }
}
