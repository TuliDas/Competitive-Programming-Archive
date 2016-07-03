#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int s,n,m;
    long double z,a,b,nn,mm,t;
    while(cin>>n>>m>>a>>b)
    {
        nn=n;
        mm=m;
        z=b/m;
        if(m>=n && n*a>b)
            s=b;


        else if(z<=a)
        {
            if(b<a)
            {
                //t=((n%m)/m * m);
                //cout<<t<<endl;
                if(t<=1.0)
                  s=(n/m)*b +b;

                else
                    s=(n/m)*b + t*b;

            }
            else
                s=(n/m)*b + (n%m)*a;
        }
        else if(z>a)
        {
            s = n*a;
        }
        cout<<s<<endl;

    }
    return 0;
}



