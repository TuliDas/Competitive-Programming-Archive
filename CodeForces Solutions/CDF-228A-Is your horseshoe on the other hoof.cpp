/*
Problem Name : CDF-228A-Is your horseshoe on the other hoof?
Problem Link : https://codeforces.com/contest/228/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/02/2016
*/

#include<bits/stdc++.h>
using namespace std;
set <int> st;
int main()
{
    int n;
    st.clear();
    for(int i=0;i<4;i++)
    {
        cin>>n;
        st.insert(n);
    }
    cout<<4-st.size()<<endl;
}

 
