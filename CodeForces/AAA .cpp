#include<bits/stdc++.h>
using namespace std;
vector <int> v;
int main()
{
    long long int n,m,s,j,t,k,a,b,h,x,y;
    while(cin>>n>>m)
    {
        s=0;
        for(long long int i=0; i<n; i++)
        {
            cin>>t;
            v.push_back(t);
        }

        for(k=0; k<v.size(); k++)
        {
            s=s+v[k];
        }


        if(s%m==0)
            cout<<"YES"<<endl;
            else if(s<m)
                cout<<"NO"<<endl;

        else
        {
            if(m%2==0)
            {
                a=m/2;
                b=m/2;
            }
            else
            {
                a=m/2;
                b=m/2 +1;
            }

            while(a+b==m)
            {
                x=0;
                y=0;
                for( j=0; j<=v.size(); j++)
                {
                    if(v[j]==a)
                        x++;
                    if(v[j]==b)
                        y++;

                }
                if(x>=1 && y>=1)
                {
                    cout<<"YES"<<endl;
                    break;
                }
                a++;
                b--;


            }
            if(x<1 && y<1)
                cout<<"NO"<<endl;

        }
    }


    return 0;
}
