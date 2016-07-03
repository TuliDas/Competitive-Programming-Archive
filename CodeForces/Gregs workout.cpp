#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a[3],i,x;
    while(cin>>n)
    {
        a[0]=0;
        a[1]=0;
        a[2]=0;
        for(i=1; i<=n; i++)
        {
            cin>>x;
            if(i%3==1)
                a[0]= a[0]+ x;
            else if(i%3==2)
                a[1]= a[1]+x;
            else
                a[2]= a[2]+ x;
        }
        if(a[0]>=a[1] && a[0]>=a[2])
            cout<<"chest"<<endl;
        else if(a[1]>=a[0] && a[1]>=a[2])
            cout<<"biceps"<<endl;
        else
            cout<<"back"<<endl;
    }
    return 0;
}
