#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    int n;
    while(cin>>n)
    {
        int h,l,d1,d2,d;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1)
                l=i+1;
            if(a[i]==n)
                h=i+1;
        }

        if(l>h)
            swap(l,h);

        d1=h-1;
        d2=n-l;

        if(d1>d2)
            d=d1;
        else
        {
            d=d2;
        }
        cout<<d<<endl;
    }
    return 0;
}
