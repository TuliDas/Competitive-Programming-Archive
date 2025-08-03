/*
Problem Name : CDF - C. Cinema
Problem Link : https://codeforces.com/problemset/problem/670/C
Vjudge.net   : https://vjudge.net/problem/CodeForces-670C
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2018-09-10
*/


#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<sstream>
#include<stdlib.h>
#include<math.h>
#include<cstdio>
#include<string>
#include<cstring>   //for memset
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<list>
#include<iterator>
#include <iomanip>
#include<numeric>
//#include<unordered_map>
//#include<unordered_set>


using namespace std;

#define llu                    unsigned long long
#define lli                     int long long
#define ld                      long double    //printf("%.9Lf")
#define pb                      push_back
#define mp                      make_pair
#define pi                      acos(-1)
#define dif(ax,ay,bx,by)        (ax-bx)*(ax-bx)+(ay-by)*(ay-by)
#define READ                    freopen("in.txt","r",stdin);
#define WRITE                   freopen("outer.txt","w",stdout);
#define sort(v)                 sort(v.begin(),v.end())
#define REP(i,n)                for(i=0; i<n; i++)
#define REV(i,n)                for(i=n; i>=0; i--)
#define FOR(i,p,k)              for(i=p; i<k; i++)
#define SZ(a)                   (int)a.size()
#define M                      10000000
#define ff                       first
#define ss                       second
//#define for(i,a,b)               for(int i=a;i<b;i++)
//int a[8]= {0,0,-1,1,-1,1,-1,1};
//int b[8]= {-1,1,0,0,-1,1,1,-1};

vector<int>s,v;
map<int,int>me,sati;
map<int,int>::iterator it;
int ar[200002];

int main()
{
   int n,x,m;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       scanf("%d",&x);
       me[x]++;
       sati[x]++;
   }
   cin>>m;
   int mx=0;
   for(int i=0;i<m;i++)
   {
       scanf("%d",&x);
       ar[i]=x;
      it=me.find(x);
      if(it!=me.end())
      {
          mx=max(mx,me[x]);
      }
   }
   int mm=-1,pos=0;
    for(int i=0;i<m;i++)
   {
       scanf("%d",&x);
      s.pb(x);
      if(me[ar[i]]==mx)
      {
          it=sati.find(x);
          if(it!=sati.end())
          {
              if(mm<sati[x])
              {
                  mm=sati[x];
                  pos=i+1;
              }
          }
          else
          {
              if(mm<0)
              {
                  mm=sati[x];
                  pos=i+1;
              }
          }
      }
   }
   cout<<pos;
    return 0;


}
