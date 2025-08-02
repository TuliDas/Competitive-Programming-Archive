// Language    : C++ 17
// Problem Name: UVA 280 - Vertex
// Problem Link : https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=216
// Verdict     : ACCEPTED
// Solved on   : 2021-06-26

#include<bits/stdc++.h>
using namespace std;

struct Graph
{
    int N;
    vector <int> graph[105];
    bool visited[105];

    Graph(int n)
    {
        N = n;
    }

    void addEdges(int u,int v)
    {
        graph[u].push_back(v);
    }

    void BFS(int s)
    {
        int cnt = 0;
        memset(visited,false,sizeof(visited));
        queue <int> q;
        q.push(s);
        while(!q.empty())
        {
            int v,u = q.front();
            q.pop();
            for(int i=0; i<graph[u].size(); i++)
            {
                v = graph[u][i];
                if(visited[v]==false)
                {
                    visited[v]=true;
                    cnt++;
                    q.push(v);
                }
            }
        }

        printf("%d",N-cnt);
        for(int i=1; i<=N; i++)
        {
            if(visited[i]==false)
                printf(" %d",i);
        }
        printf("\n");
    }

};



int main()
{
    //freopen("input.txt","r+",stdin);
    //freopen("output.txt","w+",stdout);
    int n;
    while(true)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        Graph g(n);

        while(true)
        {
            int x;
            scanf("%d",&x);
            if(x==0)
                break;

            while(true)
            {
                int y;
                scanf("%d",&y);
                if(y==0)
                    break;
                g.addEdges(x,y);
            }
        }
        int q;
        scanf("%d",&q);
        while(q--)
        {
            int test;
            scanf("%d",&test);
            g.BFS(test);
        }
    }

}
