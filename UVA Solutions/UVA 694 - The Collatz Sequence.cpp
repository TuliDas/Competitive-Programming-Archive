// Problem Name	: UVA 694 - The Collatz Sequence
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=635
// Vjudge Link  : https://vjudge.net/problem/UVA-694
// Verdict	    : Accepted
// Language	    : C++11
// Solved on    : 2016-10-16 [on Vjudge]


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,limit;
    int c=1;
    while(scanf("%lld %lld",&n,&limit)==2)
    {
        if(n==-1 && limit==-1)
            break;

        long long test,knt;
        test=n;
        knt=1;
        while(true)
        {

            if(test==1) break;

            if(test>limit)
            {
                knt--;
                break;

            }
            if(test%2==0)
                test/=2;
            else test=(3*test)+1;
            knt++;
        }

        printf("Case %d: A = %lld, limit = %lld, number of terms = %lld\n",c++,n,limit,knt);


    }
    return 0;
}
