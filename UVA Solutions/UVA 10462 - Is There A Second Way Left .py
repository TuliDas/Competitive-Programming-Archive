# Language    : Python 3.9.2
# Problem Name: UVA 10462 - Is There A Second Way Left?
# Prolem Link : https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1403
# Verdict     : Accepted
# Solved on   : 2021-04-21


import sys
import math

class Graph:
    def __init__(self,vertices):
        self.V = vertices
        self.graph = []
        self.par = [] 
        self.rank = []
        self.result = []
        self.makeset()

    def addEdges(self,u,v,w):
        self.graph.append([u,v,w])
        return

    def makeset(self):
        self.par.append(0)
        self.rank.append(0)
        for i in range(1,self.V+1):
            self.par.append(i)
            self.rank.append(0)
        return
        
    def find(self,r):
        if self.par[r] == r :
            return r 
        self.par[r] = self.find(self.par[r])
        return self.par[r] 
        
    def union(self,a,b):
        x = self.find(a)
        y = self.find(b)

        if self.rank[x] < self.rank[y]:
            self.par[x] = y
        elif self.rank[y] < self.rank[x]:
            self.par[y] =x
        else:
            self.par[y] = x 
            self.rank[x] += 1
        return
        
    def KrusKal_Algorithm(self):
        minimum_Cost = 0
        self.graph = sorted(self.graph,key=lambda item: item[2])
        
        for i in self.graph:      
            u,v,w = i
            x = self.find(u)
            y = self.find(v)

            if x!=y:
                minimum_Cost += w
                self.result.append([u,v,w])
                self.union(x,y)

            if len(self.result) == self.V-1 :
                break

        if len(self.result) != self.V -1 :
            minimum_Cost=-1
        return minimum_Cost
    
    def SecondBestMst(self):
        second_minimum_Cost = math.inf
        for j in self.result:
            no_more_pop = False
            Node_taken = 0
            minimum_Cost = 0
            self.par.clear()
            self.rank.clear()
            self.makeset()

            for i in self.graph:

                if (j == i) and (no_more_pop==False):
                    no_more_pop = True
                    continue

                u,v,w = i
                x = self.find(u)
                y = self.find(v)
                
                if x!=y:
                    minimum_Cost += w
                    Node_taken += 1
                    self.union(x,y)
                
                if Node_taken == self.V-1:
                    if minimum_Cost<second_minimum_Cost:
                        second_minimum_Cost = minimum_Cost
                    break

        return second_minimum_Cost

def main():
    #sys.stdin = open("input.txt", "r")
    #sys.stdout = open("out.txt", "w")

    tc = int(input())
    for i in range(1,tc+1):
        V,E = map(int,input().split())
        g = Graph(V)
        for j in range(E):
            u,v,w = map(int,input().split())
            g.addEdges(u,v,w)

        minimum_cost = g.KrusKal_Algorithm()

        if (V==1) and (E==0):
            print("Case #%d : No second way"%(i))

        elif minimum_cost < 0 :
            print("Case #%d : No way"%(i))

        else:
            second_minimum_Cost = g.SecondBestMst()
            if second_minimum_Cost==math.inf and minimum_cost >= 0 :
                print("Case #%d : No second way"%(i))
            else:
                print("Case #%d : %d" % (i,second_minimum_Cost))
        
    #sys.stdin.close()
    #sys.stdout.close()

if __name__ == '__main__':
    main()
