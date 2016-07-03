#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int s,n,i,c,a[10000],p[10000],ss,t,j;
    while(cin>>s>>n)
    {
        ss=s;
        c=0;
        for(i=1; i<=n; i++)
        {
            cin>>a[i]>>p[i];
            if(s>a[i])
            {
                c++;
                s=s+p[i];
            }
        }
        if(c==n)
            cout<<"YES"<<endl;
        else
        {
            t=0;
            for(j=n; j>=1; j--)
            {
                if(ss>a[j])
                {
                    t++;
                    ss= ss+ p[j];
                }
            }
            if(t==n)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
