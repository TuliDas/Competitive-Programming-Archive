// Problem Name: UVA 336 - A Node Too Far
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=272
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2017-09-11


#include<bits/stdc++.h>
using namespace std;
vector <int> VV[1000000];
queue < int> q,T;
set < int> input;
map <int,bool> visited;

int bfs(int src,int TTL)
{
    visited.clear();
    while(!q.empty()) q.pop();
    int visit=0;
    q.push(src);
    visited[src]=true;

    while(1)
    {
        if(TTL==0) break;
        src=q.front();
        q.pop();
        for(int i=0; i<VV[src].size(); i++)
        {
            int z;
            z= VV[src][i];
            if(visited[z]==false)
            {
                visit++;
                visited[z]=true;
                T.push(z);
            }
        }
        if(q.size()==0 && T.size()!=0)
        {
            TTL--;
            while(!T.empty())
            {
                int x;
                x=T.front();
                T.pop();
                q.push(x);
            }
        }
        if(q.size()==0 && T.size()==0) break;

    }
    return input.size()-visit;
}

int main()
{
    int n,kase=1,u,v,t;
    while(cin>>n)
    {
        set <int> :: iterator it;
        for(it=input.begin(); it!=input.end(); it++)
            VV[*it].clear();

        input.clear();


        if(n==0) break;
        while(n--)
        {
            cin>>u>>v;
            input.insert(u);
            input.insert(v);
            VV[u].push_back(v);
            VV[v].push_back(u);
        }
        int src,ttl;

        while(cin>>src>>ttl)
        {
            if(src==0 && ttl==0) break;
            int ans=bfs(src,ttl);
            cout<<"Case "<<kase++<<": "<<ans-1<<" nodes not reachable from node "<<src<<" with TTL = "<<ttl<<"."<<endl;
        }
    }

}
