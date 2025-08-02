# Language    : Python 3.9.2
# Problem Name: UVA 10246 - Asterix and Obelix
# Prolem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1187
# Verdict     : Accepted
# Solved on   : 2021-05-20

import sys
import math
from collections import defaultdict


class Graph:
    def __init__(self,N):
        self.N = N
        self.dis = [[math.inf for i in range(N+1)] for j in range(N+1)]
        self.feast = []
        self.Max_Feast = [[math.inf for i in range(N+1)]for j in range(N+1)]
    
    def Diagonally_zero(self):
        for i in range(1,self.N+1):
            self.dis[i][i] = 0
        return

    def Make_MaxFeastCost(self):
        for i in range(1,self.N+1):
            self.Max_Feast[i][i] = self.feast[i]
        return
    
    def Floyad_Warshall(self):
        for k in range(1,self.N+1):
            for i in range(1,self.N+1):
                for j in range(1,self.N+1):
                    
                    temp1 = self.Max_Feast[i][j]
                    temp2 = max (self.Max_Feast[i][k],self.Max_Feast[k][j])
                    if self.dis[i][j] + temp1 > self.dis[i][k] + self.dis[k][j] + temp2:
                        self.dis[i][j] =  self.dis[i][k] + self.dis[k][j]
                        self.Max_Feast[i][j] = temp2               
        return

def main():
    #sys.stdin = open("input.txt","r+")
    #sys.stdout = open("output.txt","w+")
    tc = 1
    while True:
        N,R,Q = map(int,input().split())
        if N==0 and R==0 and Q==0:
            break
        if tc>1:
            print("")
        
        g = Graph(N)
        #g.Diagonally_zero()
        
        strr = input()
        g.feast = [int(x) for x in strr.split()]
        g.feast = [0,*g.feast]
        g.Make_MaxFeastCost()
        
        for i in range(R):
            u,v,w = map(int,input().split())
            g.dis[u][v] = w 
            g.dis[v][u] = w 
            g.Max_Feast[u][v] = g.Max_Feast[v][u] = max (g.Max_Feast[u][u],g.Max_Feast[v][v]) 
        
        g.Floyad_Warshall()
        g.Floyad_Warshall()
        
        print("Case #%d"%(tc))
        while Q>0:
            a,b = map(int,input().split())
            if g.dis[a][b] == math.inf:
                print("-1")
            else:
                print(g.dis[a][b]+g.Max_Feast[a][b])
            Q -= 1
        tc += 1
    #sys.stdin.close()
    #sys.stdout.close()
if __name__ == '__main__':
    main()
