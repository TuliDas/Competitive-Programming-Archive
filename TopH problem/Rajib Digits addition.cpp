#include<bits/stdc++.h>
using namespace std;

long long  digitsum(long long n)
{

    if (n<10)
        return n*(n+1)/2;


    long long  d = log10(n);


    long long *a = new long long[d+1];
    //cout<<"d = "<<d<<endl;
    a[0] = 0, a[1] = 45;
    for (long long  i=2; i<=d; i++)
        a[i] = a[i-1]*10 + 45*ceil(pow(10,i-1));

    long long p = ceil(pow(10, d));


    long long msd = n/p;

    return msd*a[d] + (msd*(msd-1)/2)*p +
           msd*(1+n%p) + digitsum(n%p);
}

long long SumOfDigitRecursiveSolution(long long n, long long ditInd, long long poss)
{
        if (n == 0)
        {
            return 0;
        }
        long long m = n % 10;
        return n / 10 * 45 * ditInd + m * poss + m * (m - 1) / 2 * ditInd + SumOfDigitRecursiveSolution(n / 10, ditInd * 10, poss + m * ditInd);
}

int main()
{
    long long T;
    long long a,b;
    long long ans=0, AnotherAns;
    cin>>T;
    while(T--)
    {
        ans=0;
        cin>>a>>b;

        //ans=digitsum(b)-digitsum(a-1);
        //cout<<ans<<endl;

        AnotherAns = SumOfDigitRecursiveSolution(b, 1, 1) - SumOfDigitRecursiveSolution(a-1, 1, 1);
        cout<<AnotherAns<<endl;

    }
    return 0;
}
