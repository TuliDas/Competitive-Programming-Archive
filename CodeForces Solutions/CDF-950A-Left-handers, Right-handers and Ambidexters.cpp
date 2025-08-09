/*
Problem Name : CDF-950A-Left-handers, Right-handers and Ambidexters
Problem Link : https://codeforces.com/contest/950/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Mar/21/2018
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int l,r,a,ans;
    cin>>l>>r>>a;

    if(l==0 && r==0 && a==0)
        ans=0;
    else if((l==0 && a==0) || (r==0 && a==0))
        ans=0;

    else if(l==r)
    {
        ans= l + r + (a/2)*2;
    }
    else if(l<r)
    {
        int temp;
        temp= a+l;
        if(temp<r)
        {
            a=0;
            r = r - (r- temp);
            l=temp;
            ans=r+l;
        }
        else if(temp==r)
            ans= l+a+r;
        else
        {
            a= a- (r-l);
            l=temp;
            l= l- (l-r);
            ans= l+r+ (a/2)*2;
        }

    }
    else
    {
        swap(l,r);
        int temp;
        temp= a+l;
        if(temp<r)
        {
            a=0;
            r = r - (r- temp);
            l=temp;
            ans=r+l;
        }
        else if(temp==r)
            ans= l+a+r;
        else
        {
            a= a- (r-l);
            l=temp;
            l= l- (l-r);
            ans= l+r+ (a/2)*2;
        }

    }
    cout<<ans<<endl;


}
