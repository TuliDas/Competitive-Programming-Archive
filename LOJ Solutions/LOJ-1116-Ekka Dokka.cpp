/*
Problem Name : LOJ-1116-Ekka Dokka
Problem Link : https://lightoj.com/problem/ekka-dokka
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-10-12
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j;
    scanf("%d",&n);
    j=1;
    while(n--)
    {
        long long int a,n,m,test;
        scanf("%lld",&a);
        if(a%2!=0)
            printf("Case %d: Impossible\n",j++);
        else
        {
            n=1;
            m=a;
            test=2;

            while(true)
            {
                if(a%test==0 && (a/test)%2!=0)
                {
                    n=a/test;
                    m=test;
                    break;
                }
                test+=2;
            }
            printf("Case %d: %lld %lld\n",j++,n,m);

        }
    }




    return 0;

}

