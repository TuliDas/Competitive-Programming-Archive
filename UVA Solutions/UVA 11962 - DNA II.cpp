// Problem Name : UVA 11962 - DNA II
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3113
// Vjudge.net  	: https://vjudge.net/problem/UVA-11962
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-11-13


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,kase=1;
    cin>>tc;

    while(tc--)
    {
        string s;

        cin>>s;

        long long ans=0;
        long long p=0,num;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='A')
                num= 0;
            else if(s[i]=='C')
                num= 1;
                else if(s[i]=='G')
                num= 2;
                else if(s[i]=='T')
                num= 3;

            ans += (num * powl(4,p));
            p++;
        }
        printf("Case %d: (%d:%lld)\n",kase++,s.size(),ans);
    }

}
