#include<stdio.h>

int main()
{
    long long n,m,result;
    char s;
    while(scanf("%lld %c %lld",&n,&s,&m)!=EOF)
    {
        if(s=='%')
        {
            result=n%m;
        }
        else
        {
            result=n/m;
        }

        printf("%lld\n",result);
    }
    return 0;
}
