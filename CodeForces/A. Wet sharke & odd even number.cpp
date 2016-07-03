#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100001],n;
    while(cin>>n)
    {
        long long int s=0;
        for(long long int i=0; i<n; i++)
        {
            cin>>a[i];
            s=s+a[i];
        }

        if(s%2==0)
            cout<<s<<endl;
        else
        {
            sort(a,a+n);
            long long int j=0;
            while(true)
            {
                if(a[j]%2!=0)
                {
                    s=s-a[j];
                    break;
                }
                j++;
            }
            cout<<s<<endl;
        }

    }
    return 0;
}

