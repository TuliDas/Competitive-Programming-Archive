#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int c=0;
        int i=1;
        int j=0;
        int s=0;
        while(true)
        {
            j=j+i;
            s=s+j;
           if(s<=n)
           {
               c++;
               i++;

           }
           if(j>n)
            break;
        }
        cout<<c<<endl;
    }
    return 0;
}
