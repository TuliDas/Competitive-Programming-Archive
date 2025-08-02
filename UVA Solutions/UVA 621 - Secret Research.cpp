// Problem Name : UVA 621 - Secret Research
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=562
// Vjudge.net  	: https://vjudge.net/problem/UVA-621
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-09-11

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    int l;

    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        l=s.size();
        if(s=="1" || s=="4" || s=="78")
            cout<<"+"<<endl;

        else if(l>2 && s[l-1]=='5' && s[l-2]=='3')
            cout<<"-"<<endl;

        else if(l>3 && s[0]=='1' && s[1]=='9' && s[2]=='0')
            cout<<"?"<<endl;

        else if(l>2 && s[0]=='9' && s[l-1]=='4')
            cout<<"*"<<endl;
    }
    return 0;
}
