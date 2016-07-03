#include<stdio.h>
#include<string.h>

int prime(int sum)
{
    int h;
    if(sum<=2)
    {
        return 1;
    }
    else if(sum%2==0)
    {
        return 0;
    }

    else
    {
        for(h=3; h<sum; h=h+2)
        {
            if(sum%h==0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    char s[21];
    while(scanf("%s",&s)!=EOF)
    {
        int i,j,k,sum,l,X,Z,r;
        int a[53];
        char aa[53];
        char x,z;
        l=strlen(s);


        for(i=0; i<52; i++)
        {
            a[i]=i+1;
        }

        for(x='a',X=0; x<='z'; x++,X++)
        {
            aa[X]=x;
        }

        for(z='A',Z=26; z<='Z' ; z++,Z++)
        {
            aa[Z]=z;
        }

        sum=0;

        for(k=0; k<l; k++)
        {
            if(s[k]>='A' && s[k]<='z')
            {
                for(j=0; j<52; j++)
                {
                    if(s[k]==aa[j])
                    {
                        sum=sum+a[j];
                    }
                }
            }
        }
        r=prime(sum);
        if(r==1)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
