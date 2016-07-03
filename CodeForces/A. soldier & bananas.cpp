#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,c,dl,j,i;

    while(cin>>a>>b>>c)
    {
        dl=0;
        j=1;
        for(i=0;i<c;i++)
        {
          dl=dl+a*j;
          j++;
        }
        if(dl>b)
            cout<<dl-b<<endl;
        else
        {
            cout<<"0"<<endl;
        }

    }

    return 0;
}

