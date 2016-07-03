#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,t,i,j,x[100];
    while(cin>>n)
    {
        if(n==1)
            cout<<"-1"<<endl;
        else
        {
            a=n;
            t=2;
            i=0;
            while(a--)
            {
                if(t%2==0)
                {
                    x[i]=t;
                    t--;
                }

                else
                {
                    x[i]=t;
                    t=t+3;
                }
                i++;
            }
            for(j=0; j<n; j++)
            {
                cout<<x[j]<<" ";
            }
            cout<<endl;

        }
    }

    return 0;
}


