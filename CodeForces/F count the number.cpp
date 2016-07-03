#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,b;
    while(cin>>n>>m)
    {
        long long int c=0;

        for(long long int i=1; i<=n; i++)
        {
          if(m%i==0 && m<= i*n && m>=i)
            c++;
        }
        cout<<c<<endl;
    }
    return 0;


}

