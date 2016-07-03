#include<bits/stdc++.h>
using namespace std;


int main()
{

    long long int a[100],m,n,i,j,k,l,c;
    while(cin>>n>>m)
    {
        c=0;
        string s[105];
        memset(a,0,sizeof(a));

        for(i=0; i<n; i++)
        {
            cin>>s[i];

            for(j=0; j<m; j++)
            {
                if(s[i][j]>=a[j])
                    a[j]=s[i][j];
            }

        }
        for(k=0; k<n; k++)
        {
            for(l=0; l<m; l++)
            {
                if(s[k][l]==a[l])
                {
                    c++;
                    break;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}


