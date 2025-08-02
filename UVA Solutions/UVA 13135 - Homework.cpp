// Problem Name     : UVA 13135 - Homework
// Problem Link     : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=5046
// Verdict          : Accepted
// Language         : C++
// Solved on        : 2016-11-02

#include<bits/stdc++.h>
using namespace std;

map <long long,long long> mp;
int main()
{
    mp.clear();
    long long n=1;
   long long p=1;
    while(p<500000000)
    {
        p= ((n+1)*(n+2))/2;
        mp[p]=n;
        n++;
    }

    int tc;
    scanf("%d",&tc);
    while (tc--)
    {
        long long t;
        scanf("%lld",&t);
        if(t==1)
            cout<<"0"<<endl;
        else {
        if(mp[t]!=0)
            cout<<mp[t]<<endl;
        else
            cout<<"No solution"<<endl;
        }
    }
    return 0;

}
