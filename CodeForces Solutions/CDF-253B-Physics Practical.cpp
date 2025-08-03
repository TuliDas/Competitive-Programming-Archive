/*
Problem Name : CDF-253B-Physics Practical
Problem Link : https://codeforces.com/problemset/problem/253/B
Language     : C++
Verdict      : ACCEPTED
Solved On    : Nov/21/2016
*/

#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;

int main()

{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin>>n;
    int p;
v.clear();
    for(int i=0; i<n; i++)
    {
        fin>>p;
        v.push_back(p);
    }

    sort(v.begin(),v.end());

        int a,b,t,ans;
        ans=n;
        for(int i=0;i<n;i++)
        {
              t = upper_bound(v.begin(),v.end(),v[i]*2) - v.begin()-1;
                 a= i+ (n-1)-t;
             // cout<<"for v ="<<v[i]<<". t = "<<t<<endl;
            //  cout<<"a = "<<a<<endl;


              ans= min(ans,a);
        }
        fout<<ans<<endl;
    return 0;
}
