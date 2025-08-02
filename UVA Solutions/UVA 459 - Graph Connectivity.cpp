// Problem Name     : UVA 459 - Graph Connectivity
// Problem Link     : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=400
// Vjudge.net       : https://vjudge.net/problem/UVA-459
// Verdict          : Accepted
// Language         : C++
// Solved on        : 2016-12-22

#include<bits/stdc++.h>
using namespace std;
vector<char> v[100];
map<int,bool> mp;
queue <int> q,qq;

void check(int n)
{
    while(!q.empty())
        q.pop();

    q.push(n);
    mp[n]=true;

    int num;

    while(!q.empty())
    {
        num=q.front();
        q.pop();
        for(int i=0; i<v[num].size(); i++)
        {
            int t;
            t= v[num][i];
            if(mp[t]==false)
            {
                q.push(t);
                mp[t]=true;
            }
        }
    }
}

int main()
{
    int tc;
    cin>>tc;
    string s,ss;
    while(!qq.empty())
        qq.pop();

    for(int j=1; j<=tc; j++)
    {

        for(int k=65; k<=100; k++)
            v[k].clear();

        char a,b,in;
        int num;
        cin>>s;
        getchar();
        in=s[0];

        while(1)
        {
            getline(cin,s);
            if(s.empty())
                break;

            a=s[0];
            b=s[1];
            num=a;
            v[num].push_back(b);
            num=b;
            v[num].push_back(a);
        }
        int cnt=0;
        mp.clear();
        for(int i=65; i<=in; i++)
        {
            if(mp[i]==true)
                continue;

            else if(mp[i]==false && v[i].size()==0)
            {

                cnt++;
                mp[i]=true;
            }
            else
            {
                cnt++;
                check(i);
            }
        }

        if(j!=1)
            cout<<endl;
        cout<<cnt<<endl;

    }


    return 0;
}
