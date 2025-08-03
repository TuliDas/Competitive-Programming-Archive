/*
Problem Name : LOJ-1113- Discover the Web
Problem Link : https://lightoj.com/problem/discover-the-web
Vjudge.net   : https://vjudge.net/problem/LightOJ-1113
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2016-12-09
*/

#include<bits/stdc++.h>
using namespace std;
stack <string> b,f;
queue <string> q;
int main()
{
    int tc,kase=1;
    cin>>tc;
    while(tc--)
    {
        cout<<"Case "<<kase++<<":"<<endl;
        while(!b.empty())
            b.pop();
        while(!f.empty())
            f.pop();

        string input,current,url,tt;
        current="http://www.lightoj.com/";
        while(true)
        {

            cin>>input;
            if(input=="QUIT")
                break;

            if(input=="VISIT")
            {
                cin>>url;
                b.push(current);
                current=url;
                q.push(current);
                // cout<<current<<endl;
                while(!f.empty())
                    f.pop();
            }

            else if(input=="BACK")
            {
                if(b.empty())
                    q.push("tuli");
                else
                {
                    f.push(current);
                    current= b.top();
                    b.pop();
                    q.push(current);
                }
            }
            else
            {
                if(f.empty())
                    q.push("tuli");
                else
                {
                    b.push(current);
                    current= f.top();
                    f.pop();
                    q.push(current);
                }
            }


        }

        while(!q.empty())
        {
            tt=q.front();
            if(tt!="tuli")
                cout<<q.front()<<endl;
            else
                cout<<"Ignored"<<endl;
            q.pop();
        }

    }
}
