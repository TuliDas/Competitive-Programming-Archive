/*
Problem Name : CDF-1037D-Valid BFS?
Problem Link : https://codeforces.com/problemset/problem/1037/D
Vjudge.net   : https://vjudge.net/problem/CodeForces-1037D
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
int vis[200004],par[200004],pos[200004];
vector<int>v[200002],we;

void bfs(int val)
{
    par[1]=0;
    queue<int>q;
    q.push(val);
    vis[val]=1;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0;i<v[p].size();i++)
        {
            int vv=v[p][i];
            if(vis[vv]==0)
            {
                vis[vv]=1;
                par[vv]=p;
                q.push(vv);
            }
        }
    }
    return;
}

int main()
{
    memset(vis,0,sizeof vis);
    memset(par,-1,sizeof par);
   int n,x,y;
   cin>>n;
   for(int i=1;i<n;i++)
   {
       scanf("%d %d",&x,&y);
      v[x].pb(y);
      v[y].pb(x);
   }
   bfs(1);
    for(int i=0;i<n;i++)
   {
       scanf("%d",&x);
      we.pb(x);
      pos[x]=i+1;
   }
   pos[0]=0;
   int pp=n+1,f=0;
  for(int i=n-1;i>=0;i--)
  {
     int c=we[i];
     if(pp<pos[par[c]])
        f=1;
     else
     {
       pp=pos[par[c]];
     }
  }
  if(f==0)
    cout<<"Yes";
  else
    cout<<"No";
    return 0;


}
