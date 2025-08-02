# Language    : Python 3.9.2
# Problem Name: UVA 10449 - Traffic
# Prolem Link : https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1390
# Verdict     : Accepted
# Solved on   : 2021-04-23

import math
import sys


class Graph:
    def __init__(self,N):
        self.N = N  
        self.graph = [] 
        self.dis = [math.inf]*(self.N+1)      

    def addEdges(self,u,v,w):
        self.graph.append([u,v,w])
        return

    def BellManFord_Algorithm(self):
        self.dis[1] = 0
        for i in range(1,self.N):
            for u,v,w in self.graph:
                if (self.dis[u] + w < self.dis[v]) and (self.dis[u]!= math.inf) :
                    self.dis[v] = self.dis[u]+ w 

        for u,v,w in self.graph:
            if (self.dis[u] + w < self.dis[v]) and (self.dis[u]!= math.inf):
                self.dis[v] = -math.inf
        return
        
def main():
    tc = 1
    #sys.stdin = open("input.txt", "r")
    #sys.stdout = open("output.txt", "w")
    while True:
        try:
            strr = input()
            busyness = [int(x) for x in strr.split()]
            n = busyness[0]
            g = Graph(n)
            e = int(input())
            for i in range(e):
                u,v = map(int, input().split()) 
                w = busyness[v]-busyness[u]
                g.addEdges(u,v,w*w*w)

            if n>0:
                g.BellManFord_Algorithm()

            q=int(input())
            print("Set #"+str(tc))

            for i in range(q):
                sample = int(input())
                aaa = g.dis[sample]
                if aaa<3 or aaa==math.inf:
                    print("?")
                else:
                    print(aaa)
            tc = tc + 1
        except Exception:
            break
    #sys.stdin.close()
    #sys.stdout.close()

if __name__ == '__main__':
    main()