/*
Problem Name : CDF-349A-Cinema Line
Problem Link : https://codeforces.com/contest/349/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Feb/15/2017
*/

#include<bits/stdc++.h>
using namespace std;
queue <int> q25,q50,q100;
int main()
{
    int n,tk;
    while(cin>>n)
    {
        while(!q25.empty())
            q25.pop();
            while(!q50.empty())
            q50.pop();
        while(!q100.empty())
            q100.pop();
        bool flag=true;

        for(int i=0;i<n;i++)
        {
            cin>>tk;
            if(tk==25)
                q25.push(tk);
             if(tk==50)
                q50.push(tk);

            if(tk==50)
            {
                if(q25.size()==0)
                    flag=false;
                else
                    q25.pop();
            }
            if(tk==100)
            {
                if(q25.size()>0 && q50.size()>0)
                {
                    q25.pop();
                    q50.pop();
                }
                else if(q25.size()>=3)
                {
                     q25.pop();
                      q25.pop();
                       q25.pop();
                }
                else
                    flag=false;
            }



        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}

