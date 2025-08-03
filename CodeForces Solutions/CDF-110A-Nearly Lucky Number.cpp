/*
Problem Name : CDF-110A-Nearly Lucky Number
Problem Link : https://codeforces.com/problemset/problem/110/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : May/23/2016
*/

#include<iostream>

using namespace std;

int main()
{
    long long int a,d,ans,c,k;


    while(cin>>a)
    {
        c=0;
        ans=1;
        while(a!=0)
        {
            d=a%10;
            if(d==4 || d==7)
            {
                c++;
            }

            a=a/10;
        }
        if(c==0)
        {
            ans=0;
        }


        else
        {
            while(c!=0)
            {
                d=c%10;

                if(d!=4 && d!=7)
                {
                    ans=0;
                }

                c=c/10;
            }
        }


        if(ans==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
