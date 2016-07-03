#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,i;
    i=1;
    scanf("%d",&n);
    while(n--)
    {
        int N,j,age;
        int ara[10];
        scanf("%d",&N);

        for(j=0; j<N; j++)
        {
            scanf("%d",&ara[j]);
        }

        sort(ara,ara+N);

        age=ara[(N-1)/2];

        printf("Case %d: %d\n",i,age);
        i++;
    }
    return 0;
}
