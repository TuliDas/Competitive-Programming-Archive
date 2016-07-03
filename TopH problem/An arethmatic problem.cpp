#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long int n,i,a,b,c,z;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>a>>b>>c>>z;
        if(b-a != c-b)
            cout<<"Case "<<i<<": Error"<<endl;
        else
        {
            cout<<"Case "<<i<<": "<<a+(z-1)*(b-a)<<endl;
        }
    }
    return 0;
}
