#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while(cin>>n)
    {
        long long int a,b,c,d,p;
        a=0;
        b=0;
        c=0;
        d=0;
        while(n--)
        {
            cin>>p;
            if(p==4)
                d++;
            else if(p==3)
                c++;
            else if(p==2)
                b++;
            else
                a++;
        }

        if(a>=c)
            a=a-c;
        else
            a=0;


        if(b%2==0 && b!=0)
            b=b/2;

        else if(b%2!=0 && b!=0)
        {
            a=a-2;
            b= b/2 + 1;
        }


        if(a>0 && a<=4)
            a=1;
        else if(a<=0)
            a=0;
        else if(a%4==0)
            a=a/4;
            else
                a= a/4 + 1;

        cout<<a+b+c+d<<endl;
    }
    return 0;
}

