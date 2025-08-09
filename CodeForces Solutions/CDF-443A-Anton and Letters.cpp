/*
Problem Name : CDF-443A-Anton and Letters
Problem Link : https://codeforces.com/contest/443/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>
using namespace std;
set <char> st;
int main()
{
    int n;
    string s;
    while(getline(cin,s))
    {
        st.clear();
        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]<='Z' && s[i]>='A') || (s[i]<='z' && s[i]>='a'))
            {
                st.insert(s[i]);
            }
        }



        cout<<st.size()<<endl;
    }
}
 
