// Problem Name: UVA 12032 - The Monkey and the Oiled Bamboo
// Prolem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3183
// Vjudge.net  	: https://vjudge.net/problem/UVA-12032
// Verdict      : Accepted
// Language     : C++
// Solved on    : 2016-11-05

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,kase=1;
    scanf("%d",&tc);
    while(tc--)
    {
        long long ara[100005],mx=0,diff,mma;
        long long n;
        scanf("%lld",&n);
        scanf("%lld",&ara[0]);
        mx= ara[0];

        for(long long i=1; i<n; i++)
        {

            scanf("%lld",&ara[i]);
            diff= ara[i]-ara[i-1];
            mx=max(mx,diff);

        }

        //cout<<" mx = "<<mx<<endl;
         mma=mx;

        if(ara[0]==mma)
            mma--;

        bool flag=true;
        for(long long i=1; i<n; i++)
        {
                diff = ara[i]-ara[i-1];
                if(diff==mma)
                    mma--;

                else if(mma<diff)
                {
                    flag=false;
                    break;
                }

        }

       // cout<<" mx = "<<mx<<endl;
        if(flag==false)
            mx++;

        printf("Case %d: %lld\n",kase++,mx);


    }
}

