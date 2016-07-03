#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,x,d,p,n;
    while(cin>>a>>x>>d)
    {
        if(d==0 && a==x)
            cout<<"YES"<<endl;
        else if(d==0 && a!=x)
            cout<<"NO"<<endl;
        else
        {
            n=(x-a)/d;
            if(n<0)
                n=n*(-1) + 1;
            else
                n++;

            p= a + (n-1)*d;
            if(p==x)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }
    return 0;
}
