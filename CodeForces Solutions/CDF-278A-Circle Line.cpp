/*
Problem Name : CDF-278A-Circle Line
Problem Link : https://codeforces.com/contest/278/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Feb/15/2017
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,t;
    int ara[105];
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
            cin>>ara[i];
        cin>>s>>t;
        if(s>t)
            swap(s,t);
            //cout<<"s="<<s<<",t="<<t<<endl;

        long long int a1=0,a2=0;

        for(int i=s;i<t;i++)
            a1+=ara[i];
        for(int i=s-1;i>=1;i--)
                a2+=ara[i];
        for(int i=t;i<=n;i++)
            a2+=ara[i];

          //  cout<<"a1= "<<a1<<" a2 = "<<a2<<endl;
        cout<<min(a1,a2)<<endl;

    }

}
