#include<stdio.h>


int main()
{
    //freopen("input.txt", "r", stdin);

    long long a, b, ans;

    while(scanf("%lld %lld", &a, &b) == 2)
    {
        if(a<b)
        {
            ans = b-a;
        }
        else
        {
            ans = a-b;
        }
        printf("%lld\n", ans);
    }

    return 0;
}
