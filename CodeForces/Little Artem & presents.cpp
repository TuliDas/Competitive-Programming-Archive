#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int t=1;
        int c=0;

        while(true)
        {
            if(t==1)
            {
                n=n-1;
                t=0;
                if(n>=0)
                {
                    c++;
                }
            }

            else if(t==0)
            {
                n=n-2;
                t=1;
                if(n>=0)
                {
                    c++;
                }
            }

            if(t==1 && n<1) break;
            if(t==0 && n<2) break;
        }
        cout<<c<<endl;
    }


    return 0;
}
