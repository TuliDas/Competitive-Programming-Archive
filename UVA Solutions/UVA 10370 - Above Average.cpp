// Problem Name	: UVA 10370 - Above Average
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1311
// Verdict	    : Accepted
// Language	    : C++11
// Solved on   	: 2017-06-08


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[1005],st,n,test;
    double average,sum,ans;
    cin>>test;
    while(test--)
    {
        sum=0;
        st=0;
        cin>>n;
        for(int i=0;i<n;i++)
            {
                cin>>ara[i];
                sum+=ara[i];
            }
            average= sum/ (double)n;
            for(int i=0;i<n;i++)
            if(ara[i]>average) st++;
            ans= ( (double)st/(double)n )*100.0;
            cout<<fixed<<setprecision(3)<<ans<<"%"<<endl;

    }
}
