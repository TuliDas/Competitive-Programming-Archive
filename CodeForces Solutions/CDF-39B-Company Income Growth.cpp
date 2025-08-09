/*
Problem Name : CDF-39B-Company Income Growth
Problem Link : https://codeforces.com/contest/39/problem/B
Language     : C++
Verdict      : ACCEPTED
Solved On    : Oct/25/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int t;
    cin>>a;
    vector<int> v;
    int k=1;
    for(int i=1;i<=a;i++){
        cin>>t;
        if(t==k){
            v.push_back(2000+i);
            k++;
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1) cout<<" ";
    }
    cout<<endl;
    return 0;
}
