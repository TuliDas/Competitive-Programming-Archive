#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,k,z,a;
    while(cin>>n)
    {
        a=1;
        z=1;
        string s[100];
        for(i=0; i<n; i++)
        {
            cin>>s[i];
        }
        k=n-1;
        for(j=0; j<n-1; j++)
        {
            cout<<s[j][j]<<" "<<s[j+1][j+1]<<endl;
            if(s[j][j]==s[j+1][j+1])
                a++;
                cout<<s[k][k]<<" "<<s[k-1][k-1]<<endl;
            if(s[k][k]==s[k-1][k-1])
            {
                z++;
                k--;
            }
            cout<<a<<" "<<z<<endl;

        }
        if(a==n || z==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
