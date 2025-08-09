/*
Problem Name : CDF-208A-Dubstep
Problem Link : https://codeforces.com/contest/208/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Mar/20/2017
*/

#include<bits/stdc++.h>
using namespace std;
string s,ss;
vector <char> v;
int main()
{
      getline(cin,s);
      {
          v.clear();
          for(int i=0;i<s.size();)
          {
              if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
              {
                 // cout<<"size "<<v.size()<<endl;

                  if(v.size()>0 && v[v.size()-1]!=' ')
                    v.push_back(' ');
                    i+=3;
              }
              else
              {
                  v.push_back(s[i]);
                  i++;
              }

          }
          vector <char> :: iterator it;
          for(it=v.begin();it!=v.end();it++)
            cout<<*it;
          cout<<endl;
      }
}
