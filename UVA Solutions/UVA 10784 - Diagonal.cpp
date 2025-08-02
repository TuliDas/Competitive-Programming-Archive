// Problem Name: UVA 10784 - Diagonal
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1725
// Verdict: Accepted
// Language: C++
// Solved on: 2016-03-04

#include<stdio.h>
#include<math.h>

int main()

{
    int i;
    i=1;
    while(true)
    {
        double d,n,m;
        scanf("%lf",&d);

        if(d==0)
        {
            break;
        }

        n=(3.0 + sqrt(9.0 + 4*2*d))/2.0;
        m=ceil(n);

        printf("Case %d: %.0lf\n",i,m);
        i++;
    }
    return 0;
}
