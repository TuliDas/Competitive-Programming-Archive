// Problem Name: UVA 543-Goldbach's Conjecture
// Problem Link : https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=484
// Vjudge.net   : https://vjudge.net/problem/UVA-543
// Verdict	    : Accepted
// Language	    : C++11
// Solved on   	: 2016-05-27

#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<string.h>
using namespace std;


int p(int n)
{
    if(n<4 && n>1)
    {
        return n;
    }
    if(n%2==0)
    {
        return 0;
    }
    else
    {
        int j;
        for(j=3; j<=sqrt(n); j=j+2)
        {
            if(n%j==0)
            {
                return 0;
            }
        }
        return n;
    }
}

int main()
{
    int i,r;
    vector <int> v;
    bool bo[1000000];
    memset(bo,0,sizeof(bo));

    for(i=2; i<=1000000; i++)
    {
        r=p(i);
        if(r!=0)
        {
            v.push_back(r);
            bo[r]=true;

        }
    }
    int n,a,b,j,c;
    a=0;
    b=0;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }

        for(j=0; j<=v.size(); j++)
        {
            c=n-v[j];
            if(bo[c]==true)
            {
                break;
            }

        }
        printf("%d = %d + %d\n",n,v[j],c);

    }

    return 0;

}
