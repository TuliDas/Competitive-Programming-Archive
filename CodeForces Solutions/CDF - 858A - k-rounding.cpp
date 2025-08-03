/*
Problem Name : CDF - 858A - k-rounding
Problem Link : https://codeforces.com/problemset/problem/858/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Apr/29/2018
*/

#include<bits/stdc++.h>
using namespace std;

#define LL long long int

int count_zero(LL temp)
{
    int cnt=0;
    while(temp%10==0)
    {
        cnt++;
        temp/=10;
    }
    return cnt;
}

LL eliminate_zero(LL temp)
{
    while(temp%10==0)
        temp/=10;

    return temp;
}

int increasing_num(LL n)
{
    n%=10;
    if(n==0) return 1;
    if(n==5) return 2;
    if(n%2==0) return 5;

}


int main()
{
    LL n,ans,limit;
    LL k,test,temp,last;
    scanf("%lld %lld",&n,&k);
    test=count_zero(n);
    last= n%10;
    if(k<=test)
        ans=n;
     else if(last%2!=0 && last!=5)
     {
         ans= n * powl(10,k);
     }
    else
    {

        limit= powl(10,k);
        int j=increasing_num(n);
        //cout<<"j = "<<j<<endl;
        ans=n*limit;

        for(LL i=j; i<=limit; i+=j)
        {
            temp= (n*i);
            if(eliminate_zero(temp)<n)
            {
                test=count_zero(temp);

                if(test==k){
                ans=temp;
                limit = temp/n;
                }

                else if(test<k)
                {
                    for(LL i=1;i<=k-test;i++)
                        temp*=10;



                      if(limit>(temp/n)) {
                            limit=temp/n;
                            ans=temp;
                      }
                }

            }
        }
    }
    cout<<ans<<endl;

}
