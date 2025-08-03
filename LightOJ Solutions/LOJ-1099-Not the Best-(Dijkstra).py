# Language    : Python 3.9.2
# Problem Name: Light Oj 1099 - Not the Best
# Problem Link: https://lightoj.com/problem/not-the-best
# Verdict     : Accepted
# solved on   : 2021

import sys
import math
from collections import defaultdict
from queue import PriorityQueue

class Graph:
    def __init__(self,vertices):
        self.V = vertices
        self.dis_S = [math.inf] * (self.V + 1)
        self.dis_D = [math.inf] * (self.V + 1)
        self.graph = defaultdict(list)
        self.priority_queue = PriorityQueue()

    def addEdgesANDcost(self,u,v,w):
        self.graph[u].append((v,w))
        self.graph[v].append((u,w))
        return

    def Dijkstra(self,start):
        dis = [math.inf] * (self.V + 1)
        dis[start] = 0
        self.priority_queue.put((dis[start],start))

        while not self.priority_queue.empty():
            u = self.priority_queue.get()[1]
            for v,cost_uv in self.graph[u]:
                if dis[u] + cost_uv < dis[v]:
                    dis[v] = dis[u] + cost_uv
                    self.priority_queue.put((dis[v],v))
        return dis

    def Second_Shortest_Path(self):
        ans = math.inf
        for u in range(1,self.V + 1):
            for v,cost_uv in self.graph[u]:
                temp = self.dis_S[u] + cost_uv + self.dis_D[v]
                if temp<ans and temp>self.dis_S[self.V]:
                    ans = temp
        return ans

def main():
    #sys.stdin = open("input.txt", "r")
    tc = int(input())
    for i in range(1,tc+1):
        V,E = map(int,input().split())
        g = Graph(V)
        for j in range(E):
            u,v,w = map(int,input().split())
            g.addEdgesANDcost(u,v,w)
        g.dis_S = g.Dijkstra(1)
        g.dis_D = g.Dijkstra(V)
        ans = g.Second_Shortest_Path()
        print("Case %d: %d" % (i,ans))
    #sys.stdin.close()

if __name__ == '__main__':
    main()
