// Problem Name	: UVA 10295 - Hay Points
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1236
// Vjudge.net  	: https://vjudge.net/problem/UVA-10295
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2017-03-19

#include<bits/stdc++.h>
using namespace std;
map <string,int> mp;
string s,ss;
int num;
int main()
{
    int m,n;
    cin>>m>>n;
    while(m--)
    {
        cin>>s>>num;
        mp[s]=num;
    }
    int sum;
   // cout<<"finish"<<endl;
    while(n--)
    {
        sum=0;
        while(true)
        {
            cin>>ss;
            if(ss==".")
                break;
            else sum+=mp[ss];
        }
    cout<<sum<<endl;
    }


}
