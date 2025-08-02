// Problem Name : UVA 11877 - The Coco-Cola Store
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2999
// Vjudge.net  	: https://vjudge.net/problem/UVA-11877
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-10-02

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt;
    while(cin>>n)
    {
        if(n==0)
            break;
        cnt=0;
        while(true)
        {
            if(n<2)
                break;
            if(n>=3)
            {
                cnt++;
                n-=2;
            }
            if(n==2)
            {
                cnt++;
                break;
            }
        }
        cout<<cnt<<endl;
    }
}

