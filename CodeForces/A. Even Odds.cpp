#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int m,n,evn,odd,t;
    while(cin>>n>>m)
    {
        if(n%2==0)
        {
            odd=n/2;
            evn=n/2;
        }
        else
        {
            odd=(n+1)/2;
            evn=(n-1)/2;
        }

        if(m<=odd)
        {
            t=m*2-1;
        }
        else
        {
            t=(m-odd)*2;
        }
        cout<<t<<endl;
    }
    return 0;

}
