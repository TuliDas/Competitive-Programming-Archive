/*
Problem Name : LOJ-1262-Diagonal Sum
Problem Link : https://lightoj.com/problem/diagonal-sum
Language     : C++ 17
Verdict      : ACCEPTED
Solved On    : 2021
*/

#include<bits/stdc++.h>
using namespace std;
int M = 1000000;

struct Graph{
 int R,C,Rays,graph_size,total_flow,source,sink;
 vector <int> graph[205];
 int rgraph[205][205];
 vector <int> cells[105];
 int level[205];
 int visited[205];

Graph(int r,int c)
{
    R = r;
    C = c;
    Rays = r+c -1;
    source = 0;
    sink = Rays *2 +1;
    graph_size = Rays*2 + 2;
    total_flow = 0;

}

void addEdges(int u,int v,int w)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
    rgraph[u][v]=w;
    rgraph[v][u]=0;
    return;
}

void update(int a,int b)
{
    cells[a].push_back(b);
    rgraph[0][a] -= 1;
    rgraph[b+Rays][sink] -=1;
    addEdges(a,b+Rays,99);
    return;
}

void convertCellstoEdges()
{
    int mn = min(R,C);
    int cnt =1,start,a,b;
    for(int i=1;i<=mn;i++)
    {
        if(i==1){
            update(i,C);
            cnt+=1;
            continue;
        }
        start = cells[i-1][0] - 1;
        for(int j=1;j<=cnt;j++)
        {
            update(i,start);
            start += 2;
        } cnt+=1;
    }
    cnt = 1;
        for(int i=Rays; i>Rays-mn; i--)
        {
            if(cells[i].size()!=0)
                continue;

            if(i==Rays)
            {
                update(i,R);
                cnt+=1;
                continue;
            }
            start = cells[i+1][0] - 1;
            for(int j=1; j<=cnt; j++)
            {
                update(i,start);
                start += 2;
            }
            cnt+=1;
        }

        if (R>C)
        {
            a = Rays - mn;
            b = mn;
            for(int i=a;i>b;i--)
            {
                start = cells[i+1][0]-1;
                for(int j=1;j<=mn;j++)
                {
                    update(i,start);
                    start+=2;
                }
            }
        }

        if (R<C)
        {
            a = mn+1;
            b = Rays-mn;
            for(int i=a;i<=b;i++)
            {
                start = cells[i-1][0]-1;
                for(int j=1;j<=mn;j++)
                {
                    update(i,start);
                    start+=2;
                }
            }
        }
        return;
}

bool BFS(int s)
{
    queue <int> q;
    memset(level,0,sizeof(level));
    q.push(s);
    level[s]=1;
    while(!q.empty())
    {
        int v,u = q.front();
        q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            v = graph[u][i];
            if(rgraph[u][v]>0 && level[v]==0)
            {
                level[v]=level[u]+1;
                q.push(v);
            }
        }
    }
    return level[sink]>0;
}

int DFS(int u,int cap)
{
    visited[u] = 1;
    int temp = cap;

    if ( u == sink)
        return cap;

    for(int i=0;i<graph[u].size();i++)
    {
        int v = graph[u][i];
        if ((level[v] == level[u]+1) && (rgraph[u][v]>0) && (visited[v]==0))
        {
            int min_cap = DFS(v,min(temp,rgraph[u][v]));
            rgraph[u][v] -= min_cap ;
            rgraph[v][u] += min_cap ;
            temp -= min_cap;
        }
    }
    return cap-temp;
}

void Dinic(int s)
{
    while(BFS(s))
    {
        memset(visited,0,sizeof(visited));
        total_flow += DFS(s,M);
    }
    return;
}

void Print_Matrix(int t)
{
    printf("Case %d:\n",t);
    int u,v,start = 1;
    for(int i=0;i<R;i++)
    {
        u = start;
        for(int j=0;j<C;j++)
        {
            v=cells[u][0];
            if (j==C-1)
                printf("%d",rgraph[v+Rays][u]+1);
            else
                printf("%d ",rgraph[v+Rays][u]+1);
            cells[u].erase(cells[u].begin());
            if(cells[u].size()==0)
                start = u+1;
            u+=1;
        }
        printf("\n");
    }
    return;
}

};

int main()
{
    //freopen("input.txt","r+",stdin);
    //freopen("output.txt","w+",stdout);
    int tc;
    scanf("%d",&tc);
    for(int t=1;t<=tc;t++)
    {
        int R,C;
        scanf("%d %d",&R,&C);
        Graph g(R,C);
        for(int i=1;i<=R+C-1;i++)
        {
           int temp;
           scanf("%d",&temp);
           g.addEdges(g.source,i,temp);
        }
        for(int i=1;i<=R+C-1;i++)
        {
           int temp;
           scanf("%d",&temp);
           g.addEdges(i+g.Rays,g.sink,temp);
        }
        g.convertCellstoEdges();
        g.Dinic(0);
        g.Print_Matrix(t);
    }
}
