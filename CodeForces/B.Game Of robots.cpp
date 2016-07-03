#include<bits/stdc++.h>
using namespace std;
int v[1000005];
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int s=0;
        int tt,b;

        for(int j=1; j<=n; j++)
        {
            s=s+j;

            if(s>m)
            {
                b=s-m;
                tt=v[j-1-b];
                break;
            }
            else if(s==m)
            {
                tt=v[j-1];
                break;
            }
        }
        cout<<tt<<endl;
    }
    return 0;
}
