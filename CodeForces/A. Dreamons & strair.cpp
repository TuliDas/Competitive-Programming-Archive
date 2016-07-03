#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int c;

        if(n<m)
            cout<<"-1"<<endl;
        else
        {

            if(n%2==0)
                c=n/2;
            else if(n%2!=0)
                c=(n/2)+1;

            if(c%m==0)
                cout<<c<<endl;
            else
            {
                while(c<=n)
                {
                    c++;
                    if(c%m==0)
                        break;
                }

                if(c%m==0)
                    cout<<c<<endl;
                else
                {
                    cout<<"-1"<<endl;
                }
            }
        }

    }
    return 0;
}
