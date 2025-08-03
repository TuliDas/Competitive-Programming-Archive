/*
Problem Name : CDF-219A-k-String
Problem Link : https://codeforces.com/problemset/problem/219/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/09/2016
*/


#include<bits/stdc++.h>
using namespace std;
map <char,int> mp;
set <char> st;
int main()
{
    int n;
    string s;
    while(cin>>n)
    {
        mp.clear();
        st.clear();
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
            st.insert(s[i]);
        }
        bool flag=true;
        map <char,int> :: iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second%n!=0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            set <char> :: iterator it;
            string tt;
            tt="";
            for(it=st.begin(); it!=st.end(); it++)
            {
                int sss;

                sss= mp[*it]/n;
                while(sss--)
                {
                    tt+=*it;
                    //cout<<*it<<endl;
                }

            }
            for(int i=0; i<n; i++)
                cout<<tt;
            cout<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
}
