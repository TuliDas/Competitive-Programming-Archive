/*
Number Theory
Problem Name	: UVA 11752 - The Super Powers
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2852
Vjudge.net  	: https://vjudge.net/problem/UVA-11752
Language	    : C++
Solved on   	: 2018-05-05
*/


#include<bits/stdc++.h>
using namespace std;

#define M 64
#define N 65535
#define LL unsigned long long int

vector<LL> not_prime;
set<LL> ans;
int mark[M/32];

bool Check(int n,int pos)
{
    return (bool)(n & (1<<pos));
}
int Set(int n,int pos)
{
    n=n | (1<<pos);
    return n;
}


void bitwise_sieve()
{

    for( LL i =2; i*i<=M; i ++ )
    {
        if( Check(mark[i/32],i%32)==0)
        {
            for( LL j = i*2; j <= M; j +=i )
            {
                mark[j/32]=Set(mark[j/32],j % 32)   ;
            }
        }
    }

    for(LL i=2; i<=M; i++)
    {
        if( Check(mark[i/32],i%32))
            not_prime.push_back(i);
    }
}




int main()
{
    bitwise_sieve();

    double limit,temp;
    temp =(M*log10(2.0));
   // fstream myfile;
   // myfile.open("output.txt");
    ans.clear();
    ans.insert(1);

    for(int i=2; i<=N; i++)
    {
        limit = (double)temp/ (double)log10(i);
        limit= (int)limit;

        for(int j=0; j<not_prime.size(); j++)
        {
            if(not_prime[j]>limit) break;

            LL tt= powl(i,not_prime[j]);
            ans.insert(tt);
        }
    }

    set<LL> :: iterator it;
    it=ans.begin();
    it++;
    for(;it!=ans.end(); it++)
        cout<<*it<<endl;

}
