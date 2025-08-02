// Problem Name : UVA 11687 - Digits
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2734
// Vjudge.net  	: https://vjudge.net/problem/UVA-11687
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2018-08-14

#include<bits/stdc++.h>
using namespace std;

int calculate_digits(int n)
{
    int cnt=0;
    while(n)
    {
        cnt++;
        n/=10;
    }
    return cnt;
}

int main()
{
    string s;
    int dig,temp,x,prev;
    while(cin>>s)
    {
        if(s=="END") break;
        prev=s.size();

        if(s=="1") cout<<"1"<<endl;
        else
        {
            int state=1;


            while(true)
            {
                state++;
                temp=calculate_digits(prev);

                if(temp==prev)
                {
                    cout<<state<<endl;
                    break;
                }
                prev=temp;
            }
        }
    }
}
