#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,l;
    while(cin>>n)
    {
        string s[100];
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            l=s[i].size();
            if(l<=10)
                cout<<s[i]<<endl;
            else
            {
                cout<<s[i][0]<<l-2<<s[i][l-1]<<endl;
            }
        }
    }
    return 0;
}


