// Problem Name : UVA 11804 - Argentina
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2904
// Vjudge.net  	: https://vjudge.net/problem/UVA-11804
// Verdict      : Accepted
// Language     : C++
// Solved on    : 2016-12-09

#include<bits/stdc++.h>
using namespace std;

struct football
{
    string name;
    int att,def;
};
vector <football> v;


bool CMP(football a,football b)
{
    if(a.att>b.att)
    return true;

    if(a.att==b.att)
    {
        if(a.def==b.def)
            return a.name<b.name;
        if(a.def<b.def)
            return true;
        return false;
    }
    return false;
}

bool ccmp(football a,football b)
{
    if(a.name<b.name)
    return true;

    return false;
}

int main()
{
    int tc,kase=1;
    cin>>tc;
    while(tc--)
    {
        v.clear();
        for(int i=0;i<10;i++)
        {
            football ff;
            cin>>ff.name>>ff.att>>ff.def;
            v.push_back(ff);
        }
       sort(v.begin(),v.end(),CMP);
       sort(v.begin(),v.begin()+5,ccmp);
       sort(v.begin()+5,v.end(),ccmp);
      cout<<"Case "<<kase++<<":"<<endl<<"(";

        for(int i=0;i<5;i++)
        {
            if(i==4)
            cout<<v[i].name<<")"<<endl;
            else
                cout<<v[i].name<<", ";
        }
        cout<<"(";
         for(int i=5;i<10;i++)
        {
            if(i==9)
            cout<<v[i].name<<")"<<endl;
            else
                cout<<v[i].name<<", ";
        }
    }
}
