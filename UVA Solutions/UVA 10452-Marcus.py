# Language    : Python 3.9.2
# Problem Name: UVA-10452-Marcus
# Prolem Link : https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1393
# Verdict     : Accepted
# Solved on   : 2021-03-31 


dx = [-1,0,0]
dy = [0,1,-1]
path = "IEHOVA#"
grid = []

class UVA_10452_Marcus:
    def __init__(self,r,c,source_x,source_y):
        self.R = r
        self.C = c
        final = self.search_path(source_x,source_y)

        for i in range(len(final)):
            if i < len(final)-1:
             print(final[i], end =" ")
            else:
                print(final[i])


    def IsValidIndex(self,x,y):
        if x>=0 and x<self.R:
            if y>=0 and y<self.C:
                return True
        return False

    def search_path(self,x,y):
        ans = []
        path_index = 0
        while grid[x][y]!='#':

            for j in range(len(dx)):
                xx = dx[j] + x
                yy = dy[j] + y
            
                if self.IsValidIndex(xx,yy)==False:
                    continue
            
                if grid[xx][yy] == path[path_index]:
                
                    if j==0:
                        ans.append("forth")
                    elif j==1:
                        ans.append("right")
                    else:
                        ans.append("left")
                
                    break
            
            x = xx
            y = yy
            path_index = path_index + 1 
    
        return ans

def main():
    test_case = int(input())

    while test_case>0:

        r,c = map(int, input().split())
        grid.clear()

        for i in range(r):
            strr = input()
            if '@' in strr:
                source_x = i
                source_y = strr.find('@')
            grid.append(strr)
        obj = UVA_10452_Marcus(r,c,source_x,source_y)

        test_case = test_case - 1

if __name__ == '__main__':
    main()

