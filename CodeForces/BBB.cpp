#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,k,c,a[100005];
    while(cin>>n)
    {
        for (i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        c=0;
        for(j=0; j<n; j++)
        {

                c++;

        }
        if(c==n)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}


