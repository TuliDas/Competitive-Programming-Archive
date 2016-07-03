#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100005],t,n,m,i,j,k,c;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        c=1;
        cin>>n;
        for(j=1; j<=n; j++)
        {
            cin>>a[j];
            if(j>1)
            {
                if(j-a[j]<=c)
                    c++;
            }
        }


        cout<<"Case "<<i<<": "<<c<<endl;
    }
    return 0;
}


