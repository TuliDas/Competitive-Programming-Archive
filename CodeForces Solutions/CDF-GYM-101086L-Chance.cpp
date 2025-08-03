/*
Number Theory
Problem Name : CDF-GYM-101086L-Chance
Problem Link : https://codeforces.com/gym/101086/problem/L
Language     : C++
Verdict      : ACCEPTED
Solved On    : May/15/2018
*/

#include<bits/stdc++.h>
using namespace std;

#define M 100000
vector <int> prime,ans;
map <int,int> mp;
bool mark[M];
void sieve()
{
    memset(mark,true,sizeof(mark));

    for(int i=2; i*i<=M; i++)
    {
        if(mark[i])
        {
            for(int j=i*2; j<=M; j+=i)
                mark[j]=false;
        }
    }

    mark[1]=false;
    for(int i=2; i<=M; i++)
    {
        if(mark[i])
            prime.push_back(i);
    }
}

int get_one(int p)
{
    if(p%2==0)
    {
        mp[p]=mp[p/2];
        return mp[p/2];
    }

    else
    {
        mp[p] = 1 + mp[p/2];
        return mp[p/2]+1;
    }
}

void procedure_1(int p,int t1,int t2)
{
    int a,b;
    a=2*p;
    b= a+1;

    while(true)
    {
        if(mp[a]!=0) return;
        mp[a]=t1;
        mp[b]=t2;
        if(a>M) return;
        if(a<=M)  ans.push_back(a);
        if(b<=M) ans.push_back(b);
        a*=2;
        b= a+1;
    }
}


void procedure_2(int p,int t1,int t2)
{
    int a,b;
    a=2*p;
    b=a+1;

    while(true)
    {
        if(mp[a]!=0) return;
        mp[a]=t1;
        mp[b]=t2;

        if(a>M) return;
        if(a<=M)   ans.push_back(a);
        a*=2;
        b=a+1;
    }
}

void procedure_3(int p,int t1,int t2)
{
    int a,b;
    a=2*p;
    b= a+1;

    while(true)
    {
        if(mp[a]!=0) return;
        mp[a]=t1;
        mp[b]=t2;
        if(b>M) return;
        if(b<=M)   ans.push_back(b);
        a*=2;
        b= a+1;
    }
}




void precalculate()
{
    mp.clear();
    mp[1]=1;
    int p,t1,t2,temp;

    for(int i=2; i<=M/2; i++)
    {

        p=i;
        t1=get_one(p);
        t2=t1+1;

        if(mark[t1] && mark[t2])
        {

            ans.push_back(p);
            procedure_1(p,t1,t2);
        }

        else if(mark[t1])
        {

            ans.push_back(p);
            procedure_2(p,t1,t2);
        }

        else if(mark[t2])
        {
            procedure_3(p,t1,t2);

        }

    }
}

int main()
{
    sieve();
    precalculate();
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()),ans.end());

    int tc,a,b,x,y;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d",&a,&b);
        x= lower_bound(ans.begin(),ans.end(),a) - ans.begin();
        y= upper_bound(ans.begin(),ans.end(),b) - ans.begin();
        cout<<y-x<<endl;

    }
}
