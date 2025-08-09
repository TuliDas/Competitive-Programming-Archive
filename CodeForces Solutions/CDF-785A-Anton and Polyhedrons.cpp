/*
Problem Name : CDF-785A-Anton and Polyhedrons
Problem Link : https://codeforces.com/contest/785/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Mar/15/2017
*/

#include<bits/stdc++.h>
using namespace std;
map <string, int> mp;

int main()
{
    int n,ans;

    mp.clear();
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    cin>>n;
    ans=0;
    string s;
    while(n--)
    {
        cin>>s;
        ans+=mp[s];
    }
    cout<<ans<<endl;
}
