/*
Problem Name : LOJ-1307-Counting Triangles
Problem Link : https://lightoj.com/problem/counting-triangles
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2016-11-09
*/


#include<bits/stdc++.h>
using namespace std;

long long ara[2005],l,h,n;
long long upper(long long l,long long h,long long p)
{
    if(l<=h)
    {
        long long mid= (l+h)/2;

        if(p==ara[mid])
            return mid;
        if(p>ara[mid])
            return upper(mid+1,h,p);

        else
            return upper(l,mid-1,p);
    }
    return l;

}
int main()
{
    int tc,kase=1;
    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%lld",&n);
        long long cnt=0;
        for(long long i=0; i<n; i++)
            scanf("%lld",&ara[i]);
        sort(ara,ara+n);


        for(long long i=0; i<n-1; i++)
        {
            for(long long j=i+1; j<n; j++)
            {
                //cout<<"For "<<ara[i]<<" & "<<ara[j]<<"-----";

                long long r,p;
                p= ara[i] + ara[j];
                // cout<<" p = "<<p<<" , ";
                l=0;
                h=n-1;
                r = upper(l,h,p);
                cnt += r-1-j;
                //cout<<" r = "<<r<<endl;

            }
        }
        printf("Case %d: %lld\n",kase++,cnt);
    }
}
