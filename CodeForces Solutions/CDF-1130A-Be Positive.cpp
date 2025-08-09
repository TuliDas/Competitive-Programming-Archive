/*
Problem Name : CDF-1130A-Be Positive
Problem Link : https://codeforces.com/contest/1130/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Feb/25/2019
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r+",stdin);
    int n;
    int ara[105];
    int sz;
    int x,y;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int ttt,ans=0;
    if(n==1)
    {
        ans=ara[0];
    }
    else {

    sort(ara,ara+n);

    sz = ceil(n/2.0);
    x=0,y=0;
    int ans1=0,ans2=0;

    for(int i=0;i<n;i++)
    {
        if(ara[i]<0)
        {
            x++;
            ans1=ara[i];
        }
        else if(ara[i]>0)
        {
            ans2 = ara[i];
            y = n - i;
            break;
        }
    }
    if(x>=sz) ans=ans1;
    else if(y>=sz) ans=ans2;
}

    if(x>=sz || y>=sz) cout<<ans<<endl;
    else cout<<"0"<<endl;

}
