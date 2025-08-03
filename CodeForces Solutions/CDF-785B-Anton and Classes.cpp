/*
Problem Name : CDF-785B-Anton and Classes
Problem Link : https://codeforces.com/problemset/problem/785/B
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2017-03-20
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,l,r,N1,N2,M1,M2;
    cin>>n;
    {
        N1=1000000001;
        N2=-1;
        while(n--)
        {
            cin>>l>>r;
            N1=min(N1,r);
            N2=max(N2,l);
        }
        M1=-1;
        M2=1000000001;
        cin>>m;
        while(m--)
        {
         cin>>l>>r;
         M1=max(M1,l);
         M2=min(M2,r);
        }
        //cout<<N<<" "<<M<<endl;
        if(M1<=N1 && N2<=M2)
            cout<<"0"<<endl;
        else
            cout<<max(M1-N1,N2-M2)<<endl;
    }
}
