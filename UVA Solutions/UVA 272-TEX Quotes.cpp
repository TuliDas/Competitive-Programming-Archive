// Problem Name : UVA 272-TEX Quotes
// Prolem Link  : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208
// Verdict	    : Accepted
// Language	    : C++
// Solved on   	: 2017-03-06
#include<bits/stdc++.h>
using namespace std;
queue <char> q;
int main()
{
    string s;
    while(getline(cin,s))
    {
        while(!q.empty())
            q.pop();

        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='"')
                q.push(s[i]);
            else
            {
            q.push('`');
           // q.push(' ');
            q.push('`');

            }
        }
        while(!q.empty())
        {
            cout<<q.front();
            q.pop();
        }
        cout<<endl;
    }
}
