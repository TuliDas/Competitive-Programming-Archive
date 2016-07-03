#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,c,i;
    while(cin>>n>>m)
    {
        if(n%m==0)
            cout<<n+m<<endl;
        else
        {
            c= n + m - n%m;
            cout<<c<<endl;
        }
    }

    return 0;
}



