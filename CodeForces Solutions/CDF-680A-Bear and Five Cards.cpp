/*
Problem Name : CDF-680A-Bear and Five Cards
Problem Link : https://codeforces.com/contest/673/problem/A
Verdict      : ACCEPTED
Solved On    : Jun/10/2016
*/

#include<bits/stdc++.h>
using namespace std;
int a[5];
int ss[5];

int main()
{
    int s;

        while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4])

    {
        s=a[0]+a[1]+a[2]+a[3]+a[4];
        ss[0]=s;

        sort(a,a+5);
        int k=0;

        for(int j=4; j>=1; j--)
        {
            if(a[j]==a[j-1] && a[j-1]==a[j-2])
            {
                ss[k]=s- (3*a[j]);
                k++;
            }

            else if(a[j]==a[j-1])
            {
                ss[k]= s-(2*a[j]);
                k++;
            }
        }
        sort(ss,ss+k);

        if(ss[0]<=s)
        cout<<ss[0]<<endl;
        else
        {
            cout<<s<<endl;
        }
    }
    return 0;
}
 
