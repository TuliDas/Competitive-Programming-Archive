#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,i,j,c;
    while(cin>>n>>m)
    {
        c=n;
        for(i=1; i<=n; i++)
        {

            if(i%m==0)
            {
                c++;
                n++;
            }
        }
        cout<<n<<endl;

    }
    return 0;
}
