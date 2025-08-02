# Language    : PYTH3 3.5.1
# Problem Name: UVA 558-Wormholes
# Prolem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=499
# Vjudge Link : https://vjudge.net/problem/UVA-558
# Verdict     : Accepted 
# Solved on   : 2021-04-21 [on Vjudge]

import sys
import math

class Graph:
    def __init__(self,vertices):
        self.V = vertices
        self.dis = [math.inf] * (self.V)
        self.graph = []


    def addEdges(self,u,v,w):
        self.graph.append((u,v,w))
        return
    
    def BellManFord_Algorithm(self):
        self.dis[0] = 0
        for i in range(1,self.V):
            for u,v,w in self.graph:
                if self.dis[u] + w < self.dis[v]:
                    self.dis[v]  = self.dis[u] + w
    
        for u,v,w in self.graph:
            if self.dis[u] + w < self.dis[v]:
                return 1
        return 0
            

def main():
    #sys.stdin = open("input.txt", "r")
    tc = int(input())
    for i in range(1,tc+1):
        V,E = map(int,input().split())
        g = Graph(V)
        for j in range(E):
            u,v,w = map(int,input().split())
            g.addEdges(u,v,w)
        ans = g.BellManFord_Algorithm()
        if ans ==1:
            print("possible")
        else:
            print("not possible")
    #sys.stdin.close()

if __name__ == '__main__':
    main()