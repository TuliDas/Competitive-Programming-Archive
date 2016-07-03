#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,j,t;
    int y[4];
    while(cin>>n)
    {

        for(long long int i=n+1; ;i++)
        {
            b=i;
            j=0;
          while(b>0)
          {
            t=b%10;
            b=b/10;
            y[j]=t;
            j++;
          }
          if(y[0]!=y[1] && y[0]!=y[2] && y[0]!=y[3] && y[1]!=y[2] && y[1]!=y[3] && y[2]!=y[3])
          {
              n=i;
              break;
          }

        }

        cout<<n<<endl;
    }
    return 0;
}
