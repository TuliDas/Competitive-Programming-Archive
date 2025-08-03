/*
Number Theory
Problem Name : LOJ-1138-Trailing Zeroes (III)
Problem Link : https://lightoj.com/problem/trailing-zeroes-iii
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-04-04
*/

#include<bits/stdc++.h>
using namespace std;
long long int q,ans,n,sum,lo,hi,mid;

int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        cin>>q;
        ans=-1;

        lo=0;
        hi=100000000000000000;
        while(lo<=hi)
        {
            mid=(lo+hi)/2;
            sum=0;
            n=mid;
            while(n)
            {
                sum+=n/5;
                n/=5;
            }

            if(sum==q)
            {
                hi=mid-1;
                if(ans==-1)
                    ans=mid;
                else
                    ans=min(ans,mid);
            }
            else if(sum<q)
                lo=mid+1;
            else
                hi=mid-1;

        }
        if(ans!=-1)
            printf("Case %d: %lld\n",t,ans);
        else
            printf("Case %d: impossible\n",t);

    }
}
