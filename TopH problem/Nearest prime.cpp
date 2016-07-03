#include<bits/stdc++.h>
using namespace std;
long long int n;


long long int prime(long long int n)
{
    long long int i,j,k;
    if(n%2==0)
        return 0;
    else
    {
        for(i=3; i<sqrt(n); i+=2)
        {
            if(n%i==0)
                return 0;
        }
    }
    return n;

}
/*long long int prime(long long int n)
{
    bool p[n+1];

    long long int i,j,c;
    memset(p,true,sizeof(p));

    for(i=2; i<=n; i++)
    {
        if(p[i]==true)
        {
            for(j=i*2; j<=n; j+=i)
            {
                p[j]=false;

            }
            if(p[i]==true && i<n)
            {
                c=i;
            }
        }
    }
    return c;
}*/
int main()
{
    long long int a,r,i,c;
    cin>>a;
    while(a--)
    {
        cin>>n;
        for(i=n-1; i>=2; i--)
        {
            r=prime(i);
            if(r!=0)
            {
                c=r;
                break;
            }
        }
        cout<<c<<endl;


    }
    return 0;
}
