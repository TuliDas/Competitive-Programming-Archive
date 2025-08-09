/*
Problem Name : CDF-746B-Decoding
Problem Link : https://codeforces.com/contest/746/problem/B
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/18/2016
*/

#include<bits/stdc++.h>
using namespace std;

 deque <char> q;
int main()
{
    int n;
  string s;
    while(cin>>n>>s)
    {
   while(!q.empty())
    q.pop_front();
int test;
      int l=s.size();
      if(l%2==0)
        test=2;
      else test=1;
      q.push_back(s[0]);
bool flag;
if(test==1){
            flag=true;
            for(int i=1;i<l;i++)
            {
                if(flag)
                {
                    q.push_front(s[i]);
                    flag=false;
                }
                else
                {
                    q.push_back(s[i]);
                    flag=true;
                }

            }
}
else
{
     flag=false;
            for(int i=1;i<l;i++)
            {
                if(flag)
                {
                    q.push_front(s[i]);
                    flag=false;
                }
                else
                {
                    q.push_back(s[i]);
                    flag=true;
                }

            }
}

      while(!q.empty())
      {
          cout<<q.front();
          q.pop_front();
      }
      cout<<endl;





    }

}
