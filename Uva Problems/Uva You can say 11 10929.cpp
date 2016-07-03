#include<stdio.h>

int main()
{
    char n[1001];
    char a;
    while(scanf("%s",&n)==1)
    {
        scanf("%c",&a);
        if(n%a==0)
        {
            printf("");
        }
    }
    return 0;
}
