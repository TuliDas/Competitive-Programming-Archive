# Language    : Python 3.9.2
# Problem Name: UVA 452 - Project Scheduling
# Prolem Link : https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=393
# Verdict     : Accepted
# Solved on   : 2021-05-22

from collections import defaultdict
import sys
import math

class Graph:
    def __init__(self,v):
        self.V = v
        self.graph = defaultdict(list)
        self.task_time = [0]*(self.V+1)
        self.indegree = [0]*(self.V+1)
        self.topSorted = []
        self.ans = 0
        return
    
    def make_graph(self,u,v):
        self.graph[u].append(v)
        self.indegree[v] +=1
        #print(u,v)
        return

    def topologicalSorting(self,N):
        for i in range(1,N+1):
            taken_nodes = []
            min_tasktime = math.inf
            min_node = 0
            #print(self.indegree)
            #print(self.task_time)
            for j in range(1,N+1):
                if self.indegree[j]==0:
                    taken_nodes.append(j)
                    if self.task_time[j] < min_tasktime:
                        min_tasktime = self.task_time[j]
                        min_node = j
            self.ans += min_tasktime
            self.indegree[min_node] = -1
            for u in self.graph[min_node]:
                self.indegree[u] -=1
            taken_nodes.remove(min_node)

            if len(taken_nodes) > 0:
                for i in taken_nodes:
                    self.task_time[i] -= min_tasktime
        return

def main():
    #sys.stdin = open("input.txt","r+")
    #sys.stdout = open("out.txt","r+")
    while True:
        try:
            tc = int(input())
            blank_line = input()
            for t in range(1,tc+1):
                if t>1:
                    print("")
                g = Graph(27)
                N = 1
                while True:
                    strr = input()
                    if strr=="":
                        break
                    edges = [x for x in strr.split()]
                    v = ord(edges[0]) - 64
                    N = max(N,v)
                    time = int(edges[1])
                    g.task_time[v] = time

                    if len(edges) >2:
                        for i in edges[2]:
                            u = ord(i) - 64
                            N = max(N,u)
                            g.make_graph(u,v)
                #print(g.graph) 
                #print(g.indegree) 
                g.topologicalSorting(N)
                print(g.ans)
        except EOFError:
            g.topologicalSorting(N)
            print(g.ans)
            break
        
    #sys.stdin.close()
    #sys.stdout.close()
if __name__ == '__main__':
    main()