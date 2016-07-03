#include<bits/stdc++.h>
using namespace std;
int v[1005];
int main()
{
    int n,h;
    while(cin>>n>>h)
    {
        int s=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]<=h)
            {
                s=s+1;
            }
            else if(v[i]>h)
            {
                s=s+2;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}


