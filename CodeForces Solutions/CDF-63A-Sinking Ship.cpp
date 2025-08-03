/*
Problem Name : CDF-63A-Sinking Ship
Problem Link : https://codeforces.com/problemset/problem/63/A
Vjudge.net   : https://vjudge.net/problem/CodeForces-63A
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-09-24
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue <string> w,m,c,r;

    int n;
    while(cin>>n)
    {
        string s,ss;
        while(!w.empty())
            w.pop();
        while(!c.empty())
            c.pop();
        while(!m.empty())
            m.pop();
        while(!r.empty())
            r.pop();


        for(int i=0; i<n; i++)
        {
            cin>>ss>>s;
            if(s=="captain")
                c.push(ss);
            else if(s=="man")
                m.push(ss);
            else if(s=="woman" || s=="child")
                w.push(ss);
            else
                r.push(ss);
        }


        while(!r.empty())
        {
            cout<<r.front()<<endl;
            r.pop();
        }

        while(!w.empty())
        {
            cout<<w.front()<<endl;
            w.pop();
        }

        while(!m.empty())
        {
            cout<<m.front()<<endl;
            m.pop();
        }

        while(!c.empty())
        {
            cout<<c.front()<<endl;
            c.pop();
        }

    }
}


