/*
Problem Name : LOJ-1107-How Cow
Problem Link : https://lightoj.com/problem/how-cow
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016
*/

#include<bits/stdc++.h>
using namespace std;
queue <string> q;
int main()
{
    int tc,kase=1,a1,a2,a3,a4,b1,b2,b3,b4;
    cin>>tc;
    while(tc--)
    {
        while(!q.empty())
            q.pop();

        int qq,a,b;
        cin>>a1>>b1>>a2>>b2;
        cin>>qq;

        while(qq--)
        {
            //cout<<"Ha ha"<<endl;
            cin>>a>>b;
            if(a>=a1 && a<=a2 && b>=b1 && b<=b2)
            q.push("Yes");
          else
           q.push("No");
        }

        printf("Case %d:\n",kase++);

        while(!q.empty())
        {
            cout<<q.front()<<endl;
            q.pop();
        }


    }

}
