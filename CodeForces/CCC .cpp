#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
    long long int n,c,i,t,evn,odd,j,m;
    while(cin>>n)
    {
        t=2;
        m=0;
        evn=2;
        odd=3;

        if(n==1)
        {
            cout<<"0"<<endl;
        }

        else if(n==2)
        {
            cout<<"1"<<endl;
            cout<<"2"<<endl;
        }
        else
        {


            for(i=0; i<n; i++)
            {
                if(t>=1)
                {
                    a[i]=evn;
                    evn+=2;
                    t--;
                }
                else
                {
                    a[i]=odd;
                    odd+=2;
                    m++;
                    if(m==2)
                    {
                        t=2;
                        m=0;
                    }
                }

                if(a[i]+1==n)
                    break;

            }
            cout<<i+1<<endl;
            for(j=0; j<=i; j++)
            {
                cout<<a[j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}


