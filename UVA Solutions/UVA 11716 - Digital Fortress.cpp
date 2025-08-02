/*
Problem Name	: UVA 11716 - Digital Fortress
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2763
Language	: C++11
Solved on   	: 2017-03-15
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    string s;
    cin>>tc;
    getchar();
    while(tc--)
    {
        getline(cin,s);
        int a;
        a= sqrt(s.size());
        if(a*a!=s.size())
            cout<<"INVALID"<<endl;
        else
        {
            char ss[105][105];
            int index=0;
            for(int i=0; i<a; i++)
            {
                for(int j=0; j<a; j++)
                    ss[i][j]=s[index++];
            }

            for(int j=0; j<a; j++)
            {
                for(int i=0; i<a; i++)
                    cout<<ss[i][j];
            }

            cout<<endl;
        }
    }
}
