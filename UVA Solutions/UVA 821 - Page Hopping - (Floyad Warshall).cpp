// Language    : C++ 17
// Problem Name: UVA 821 Page Hopping
// Problem Link : https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=762
// Verdict     : ACCEPTED
// Solved on        : 2021-06-27

#include<bits/stdc++.h>
using namespace std;

struct Graph
{
    int N=105;
    int adj_graph[105][105];
    int M = 100000;

    Graph()
    {
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
                adj_graph[i][j] = M;
        }
    }


    void Floyad_Warshall()
    {
       for(int k=1;k<N;k++)
       {
           for(int i=1;i<N;i++)
           {
               for(int j=1;j<N;j++)
               {
                   adj_graph[i][j] = min (adj_graph[i][j], adj_graph[i][k] + adj_graph[k][j]);
               }
           }
       }
    }

    void Average_path_length(int tc)
    {
        double sum=0,path = 0;

        for(int i=1;i<N;i++)
        {
            for(int j=1;j<N;j++)
            {
                if(i!=j && adj_graph[i][j]!=M)
                {
                    sum += adj_graph[i][j];
                    path++;
                }
            }
        }
        printf("Case %d: average length between pages = %.3lf clicks\n",tc,sum/path);
    }

};



int main()
{
    freopen("input.txt","r+",stdin);
    freopen("output.txt","w+",stdout);
    int u,v,a,b,tc=1;
    while(true)
    {
        scanf("%d %d",&u,&v);
        if(u==0 && v==0)
            break;
        Graph g;
        g.adj_graph[u][v] = 1;
        while(true)
        {
            scanf("%d %d",&u,&v);
            if(u==0 && v==0)
                break;
            g.adj_graph[u][v] = 1;
        }
        g.Floyad_Warshall();
        g.Average_path_length(tc);
        tc++;
    }

}

