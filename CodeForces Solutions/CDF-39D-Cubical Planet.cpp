/*
Problem Name : CDF-39D-Cubical Planet
Problem Link : https://codeforces.com/contest/39/problem/D
Language     : C++
Verdict      : ACCEPTED
Solved On    : Oct/25/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    int sum=0;
    for(int i=0;i<3;i++){
        if(a[i]==b[i]) sum++;
    }
    if(sum>=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
