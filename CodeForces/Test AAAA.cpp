
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,b,c,kra[100],pra[100],j,i,a,p,result,ara[100],position,s;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&pra[j]);
    }
    c=pow(2,n);
    for(a=1; a<c; a++)
    {
        memset(ara,0,sizeof(ara));
        b=a;

        result=1;
        position=n-1;
        while(b>0)
        {
            result=b%2;
            ara[position]=result;
            position--;
            //printf("%d",result);
            b=b/2;

        }


        for(i=0; i<n; i++)
        {
            if(ara[i]==1)
            {
                printf("%d ",pra[i]);
            }
        }
        printf("\n");
    }



    return 0;


}

