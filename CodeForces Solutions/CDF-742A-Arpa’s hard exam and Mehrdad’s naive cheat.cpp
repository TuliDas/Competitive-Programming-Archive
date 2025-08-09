/*
Problem Name : CDF-742A-Arpa’s hard exam and Mehrdad’s naive cheat
Problem Link : https://codeforces.com/contest/742/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/08/2016
*/

#include<bits/stdc++.h>
using namespace std;


long long p,n,M;
long long F(long long N,long long P)
{
	if(P==0) return 1;
	if(P%2==0)
	{
		long long ret=F(N,P/2);
		return ((ret%M)*(ret%M))%M;
	}
	else return ((N%M)*(F(N,P-1)%M))%M;
}


int main()
{

    while(cin>>p)
    {
        n=1378;
        M=1000000000;
        cout<<F(n,p)%10<<endl;

    }

}
