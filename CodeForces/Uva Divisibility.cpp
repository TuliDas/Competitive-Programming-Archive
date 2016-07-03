#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int a[10005];
int ara[10005],pra[10005];

int main()
{
    long long int m,n,k,s;
    cin>>m;
    while(m--)
    {
        long long int t1,t2,t,r,j,result,position,b;
        t1=0;
        t2=0;
        cin>>n>>k;
        t=pow(2,n-1);

        for(long long int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(j=0; j<t; j++)
        {
            memset(ara,0,sizeof(ara));
            b=j;

            position=n-2;
            while(b>0)
            {
                result=b%2;
                ara[position]=result;
                position--;
                b=b/2;
            }
            pra[0]=a[0];
            r=pra[0];

            for(long long int x=0; x<n-1; x++)
            {
                if(ara[x]==1)
                {
                    pra[x+1]= (-1)*a[x+1];
                }
                else
                {
                    pra[x+1]=a[x+1];
                }
                r=r+pra[x+1];
            }

            if(r%n==0)
                t1++;
            if(r%k==0)
                t2++;

            if(t1>=1 && t2>=1)
                break;

        }

        if(t1>=1 && t2>=1)
            cout<<"Divisible"<<endl;
        else
            cout<<"Not divisible"<<endl;

    }
    return 0;
}
