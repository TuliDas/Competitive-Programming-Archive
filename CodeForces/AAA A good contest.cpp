#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,c,a,b;
    string s;
    while(cin>>n)
    {
        c=0;
        for(i=0; i<n; i++)
        {
            cin>>s>>a>>b;
            if(b>a && a>=2400)
                c=1;
        }
        if(c==1)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}




