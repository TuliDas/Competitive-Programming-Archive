// Problem Name: UVA 12403 - Save Setu
// Prolem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3834
// Language	: C++11
//Solved on   	: 2017-03-15


#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m,t;
        t=0;
        m=0;
        char s[15];
        scanf("%s %d",&s,&m);
        if(strcmp(s,"donate")==0)
        {
            scanf("%d",m);
            //printf("\n");
        else if(strcmp(s,"report")==0)
        {
            t=t+m;
            printf("%d\n",t);
        }

    }

    return 0;
}
