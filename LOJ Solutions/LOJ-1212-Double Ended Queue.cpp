/*
Problem Name : LOJ-1212-Double Ended Queue
Problem Link : https://lightoj.com/problem/double-ended-queue
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2017
*/

#include<bits/stdc++.h>
using namespace std;
deque <int> dq;
string s;
int a;
int n,m;
string temp,num;
int main()
{

    int tc,kase=1;
    cin>>tc;
    while(tc--)
    {
        while(!dq.empty())
            dq.pop_front();
        cin>>n>>m;
        getchar();
        cout<<"Case "<<kase++<<":"<<endl;
        while(m--)
        {
            getline(cin,temp);
            if(temp=="")
            {
                m++;
                continue;
            }
            stringstream ss;
            ss<<temp;

            s="";
            ss>>s;
            ss>>num;

            int d=1;
            a=0;
            if(num!="")
            {

                for(int i=num.size()-1; i>=0; i--)
                {
                    if(num[i]=='-')
                        a=a*(-1);
                    else
                    {
                        int ch;
                        ch= num[i]-'0';
                        a+= ch*d;
                        d*=10;
                    }
                }
            }

            if(dq.size()>=n && (s=="pushLeft" || s=="pushRight"))
                cout<<"The queue is full"<<endl;
            else if(dq.size()==0 && (s=="popLeft" || s=="popRight"))
                cout<<"The queue is empty"<<endl;

            else if(s=="pushLeft")
            {
                dq.push_front(a);
                cout<<"Pushed in left: "<<a<<endl;
            }
            else if(s=="pushRight")
            {
                dq.push_back(a);
                cout<<"Pushed in right: "<<a<<endl;
            }
            else if(s=="popLeft")
            {
                int p;
                p=dq.front();
                cout<<"Popped from left: "<<p<<endl;
                dq.pop_front();
            }
            else
            {
                int p;
                p=dq.back();
                cout<<"Popped from right: "<<p<<endl;
                dq.pop_back();
            }
        }

    }

}
