/*
Problem Name : CDF-841A-Generous Kefa
Problem Link : https://codeforces.com/contest/841/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Aug/20/2017
*/

#include<bits/stdc++.h>
using namespace std;
set <char> st;
map <char,int> mp;

int main()
{
    string s;
    int n,k;
    cin>>n>>k;
    {
        cin>>s;
        st.clear();
        mp.clear();

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            st.insert(s[i]);
        }
        bool flag=true;
        set <char> :: iterator it;
        for(it=st.begin();it!=st.end();it++)
        {
            if(mp[*it]>k)
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
