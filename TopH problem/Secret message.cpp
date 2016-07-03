#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int p,n,j,i,z,q;

    cin>>n;
    while(n--)

    {
        string s;
        cin>>s;
        q=s.length();
        p=sqrt(s.length());


        for(i=p-1; i>=0; i--)
        {
            z=p;
            j=i;
            while(z--)
            {

                cout<<s[j];
                j+=p;

            }
        }

        cout<<endl;
    }
    return 0;
}


