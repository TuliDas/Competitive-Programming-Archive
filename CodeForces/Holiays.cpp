#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    while(cin>>a)
    {
        int mx,mn;
        mx=0;
        mn=0;
        for(int i=7; i<=a+7; i+=7)
        {
            if(i<=a)
            {
                mx=mx+2;
                mn=mn+2;
            }

            else if(i>a)
            {
                int b;
                b=7-i+a;
                if(b>5)
                {
                    mn=mn+7-b;
                    mx=mx+2;
                }
                else if(b<=5)
                {
                    if(b==1)
                        mx=mx+1;
                    if(b>=2)
                        mx=mx+2;
                }
            }

        }
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}

