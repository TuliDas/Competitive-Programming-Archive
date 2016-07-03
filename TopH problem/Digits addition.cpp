#include<bits/stdc++.h>
using namespace std;

long long  digitsum(long long n)
{

    if (n<10)
        return n*(n+1)/2;


    long long  d = log10(n);


    long long *a = new long long[d+1];
    a[0] = 0, a[1] = 45;
    for (long long  i=2; i<=d; i++)
        a[i] = a[i-1]*10 + 45*ceil(pow(10,i-1));

    long long p = ceil(pow(10, d));


    long long msd = n/p;

    return msd*a[d] + (msd*(msd-1)/2)*p +
           msd*(1+n%p) + digitsum(n%p);
}

int main()
{


    long long T;
    long long a,b;
    long long ans=0;
    cin>>T;
    while(T--)
    {
        ans=0;
        cin>>a>>b;
        ans=digitsum(b)-digitsum(a-1);
        cout<<ans<<endl;
    }
    return 0;
}
