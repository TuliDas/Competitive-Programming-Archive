/*
Problem Name : CDF-745A-Hongcow Learns the Cyclic Shift
Problem Link : https://codeforces.com/contest/745/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/17/2016
*/

#include<bits/stdc++.h>
using namespace std;
map <string,bool> mp;
int main()
{
    string s,ss;

    while(cin>>s)
    {
        int sz,cnt=0;
        sz=s.size();
        char temp;
        ss=s;
        mp.clear();
        int p=1;

        while(sz--)
        {
            ss[s.size()-1]=s[0];
            int j=0;
            for(int i=1; i<s.size(); i++)
            {
                ss[j]=s[i];
                j++;

            }
            if(mp[ss]==false)
            {
                cnt++;
                mp[ss]=true;
            }
            s=ss;
            // cout<<ss<<endl;
            p++;
        }
        cout<<cnt<<endl;

    }

    return 0;
}
