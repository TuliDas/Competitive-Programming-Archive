#include<bits/stdc++.h>
using namespace std;
int a[55];
int main()
{
    int n;
    while(cin>>n)
    {
        int t=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        for(int j=0; j<n-2; j++)
        {
            if(a[j]!=a[j+1] && a[j+1]!=a[j+2] && a[j]!=a[j+2] && a[j+1]-a[j]<=2 && a[j+2]-a[j+1]<=2 && a[j+2]-a[j]<=2)
            {
                t=1;
                break;
            }

        }

       if(t==0) cout<<"NO"<<endl;
        else if(t==1) cout<<"YES"<<endl;
}



    return 0;
}
