# Language    : Python 3.9.2
# Problem Name: UVA-10127-Ones
# Prolem Link : https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1068
# Verdict     : Accepted
# Solved on   : 2021-04-01


class UVA_10127_Ones:
    def __init__(self,num):
        ans = self.calculation(num)
        print(ans)

    def calculation(self,num):
        ones = 1;
        d = 1;
        cnt = 0;
        while(True):
            cnt = cnt + 1
            if(ones%num==0):
                break
            d=d*10
            ones = ones + d
        return cnt
        

def main():
    while True:
        try:
            num = int(input())
            obj = UVA_10127_Ones(num)
        except EOFError:
            break

if __name__ == '__main__':
    main()
