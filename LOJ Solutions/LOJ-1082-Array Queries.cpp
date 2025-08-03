/*
Problem Name : LOJ-1082-Array Queries
Problem Link : https://lightoj.com/problem/array-queries
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2018
*/

#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int tree[3*mx],n,q;
int arr[mx];

void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return ;
    }

    int mid= (b+e)/2;
    int left,right;
    left = node*2;
    right = left +1;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = min(tree[left],tree[right]);
    return ;
}

int query(int node,int b,int e,int i,int j)
{
    if(e<i || b>j) return mx;
    if(b>=i && e<=j) return tree[node];

    int mid,left,right;
    mid = (b+e)/2;
    left = node*2;
    right = left +1;
    int p1,p2;
    p1 = query(left,b,mid,i,j);
    p2 = query(right,mid+1,e,i,j);
    return min(p1,p2);
}


int main()
{
    int tc;
    scanf("%d",&tc);

    for(int cs=1;cs<=tc;cs++)
    {
        scanf("%d %d",&n,&q);

        for(int i=1;i<=n;i++)
            scanf("%d",&arr[i]);

        init(1,1,n);
        int i,j;

        for(int t=1;t<=q;t++)
        {
            scanf("%d %d",&i,&j);
            if(t==1) printf("Case %d:\n",cs);
            printf("%d\n",query(1,1,n,i,j));
        }

    }
}
