#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,t,x,i;
    while(cin>>n>>k)
    {
        t=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x==k)
                t=1;
        }
        if(t==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}



