/*
Problem Name : CDF-712C-Memory and De-Evolution
Problem Link : https://codeforces.com/contest/712/problem/C
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/11/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        int a,b,c,s=0;

        a=y;
        b=y;
        c=y;

        for(int i=0;i<100;i++)
        {
            //cout<<a<<" "<<b<<" "<<c<<endl;
            //cout<<"aaa"<<endl;
            if(a<=b && a<=c)
            {

                a=b+c-1;
                if(a>x)
                    a=x;
                    s++;
                    //cout<<a<<endl;

            }

            else if(b<=a && b<=c)
            {
                b=a+c-1;
                if(b>x)
                    b=x;
                    s++;
            }

            else if(c<=b && c<=a)
            {
                c=a+b-1;
                if(c>x)
                    c=x;
                    s++;
            }

            if(a==x && b==x && c==x)
                break;

        }
        cout<<s<<endl;


    }
    return 0;
}
 
