// Problem Name	: UVA 575 - Skew Binary
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=516
// Vjudge.net  	: https://vjudge.net/problem/UVA-575
// Verdict	    : Accepted
// Language	    : C++
// Solved on   	: 2016-10-12


#include<bits/stdc++.h>
using namespace std;

long long skew[40];

void precalculate()
{
    for(int i=0;i<=32;i++)
    {
        long long now = (1<<(i+1)) - 1;
        skew[i] = now;

    }
}

int main()
{
    precalculate();

    string input;
    while(cin>>input)
    {
        if(input=="0") break;
        long long sum = 0;

        int sk = input.size()-1;
        for(int i=0;i<input.size();i++)
        {
            int now = input[i]-'0';
            sum+=(now*skew[sk--]);

        }

        cout<<sum<<endl;
    }



    return 0;

}

