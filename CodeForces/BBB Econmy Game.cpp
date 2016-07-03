#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double n,c,a,b,x,xx,y,yy,z,zz,p;
    long long int t;
    while(cin>>n)
    {
        t=0;
        a=1234567.0;
        b=123456.0;
        c=1234.0;

        xx=n/a;

        yy=n/b;
        zz=n/c;

        for(x=1.0;x<xx;x++)
        {
            for(y=1.0;y<yy;y++)
            {
                z=(n/c) - ((a*x)/c) - ((y*b)/c) ;
                p=floor(z);
                //cout<<x*a + y*b + p*c - n<<endl;
                //cout<<z<<" "<<p<<endl;
                //cout<<z-p<<endl;
                cout<<z-p<<endl;
                if(z-p==0)
                {
                    t=1;
                    break;
                }
            }
            if(t==1)
                break;
        }

        if(t==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }




    }

    return 0;
}





