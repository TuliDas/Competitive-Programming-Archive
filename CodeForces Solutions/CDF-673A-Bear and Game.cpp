/*
Problem Name : CDF-673A-Bear and Game
Problem Link : https://codeforces.com/contest/673/problem/A
Verdict      : ACCEPTED
Solved On    : Jun/10/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    while(cin>>n)
    {
        int a[100];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n==1 && a[0]<15)
            c=a[0]+15;

        else if(a[0]>15)
        {
            c=15;
        }

        else
        {
            for(int j=0; j<n;j++)
            {
                c=a[j]+15;

                if(c<a[j+1])
                {
                    break;
                }
            }
        }
        if(c<90)
            cout<<c<<endl;
        else
        {
            cout<<"90"<<endl;
        }
    }
    return 0;
}
