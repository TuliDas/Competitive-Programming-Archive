#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r,c,i,j,k;
    char z;
    while(cin>>r>>c)
    {
        string s[105];
        for(i=0; i<r; i++)
            cin>>s[i];

        for(j=0; j<r; j++)
        {
            for(k=0; k<c; k++)
            {
                if(s[j][k]=='.')
                {
                    if((j+1)%2!=0 && (k+1)%2!=0)
                        cout<<"B";
                    else if((j+1)%2==0 && (k+1)%2==0)
                        cout<<"B";
                    else
                        cout<<"W";
                }

                else
                    cout<<"-";
            }
            cout<<endl;

        }
    }
    return 0;
}

