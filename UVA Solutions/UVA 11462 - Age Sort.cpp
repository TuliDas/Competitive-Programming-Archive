// Problem Name : UVA 11462 - Age Sort
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2457
// Vjudge.net  	: https://vjudge.net/problem/UVA-11462
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-11-12


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    vector <int> v;

    while(cin>>n)
    {

v.clear();

        bool flag=true;
        if(n==0)
            break;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);

        }

        sort(v.begin(),v.end());

        vector <int> :: iterator it;

        for(it=v.begin();it!=v.end();it++)

            {
                if(flag)
                {
                    cout<<*it;
                    flag=false;
                }
                else
                cout<<" "<<*it;

            }
        cout<<endl;

    }
}

