#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,m,n;
    cin>>m;
    for(int i=1; i<=m; i++)
    {
        long long int a;
        long double x,n;
        cin>>n;

        x=(10.0*n)/9.0;

        a=floor(x);
        if(a==x)
            cout<<"Case "<<i<<": "<<a-1<<" "<<a<<endl;
        else
        {
            cout<<"Case "<<i<<": "<<a<<endl;
        }
    }
    return 0;
}
