#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,c,t,j,a[55];
    while(cin>>n>>k)
    {
        c=0;
        for(i=1;i<=n;i++)
        {
           cin>>a[i];
           if(i==k)
            t=a[i];

        }
        for(j=1;j<=n;j++)
        {
            if(a[j]>=t && a[j]>0)
                c++;
        }
        cout<<c<<endl;

    }
    return 0;
}
