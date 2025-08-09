/*
Problem Name : CDF-839A-Arya and Bran
Problem Link : https://codeforces.com/contest/839/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Aug/20/2017
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,num,ans=-1;
    bool flag=false;
    int cand=0,bran=0,days=0;

    cin>>n>>k;

    for(int i=0; i<n; i++)
    {
        cin>>num;
        cand+=num;

        if(cand<=8)
        {
            bran+=cand;
            cand=0;
        }
        else
        {
            bran+=8;
            cand-=8;
        }
        days++;
        if(bran>=k && flag==false)
        {
            flag=true;
            ans=days;
        }

        //cout<<"at days : "<<days<<endl<<"Cand = "<<cand<<" , bran = "<<bran<<endl<<endl;
    }
    cout<<ans<<endl;

}
