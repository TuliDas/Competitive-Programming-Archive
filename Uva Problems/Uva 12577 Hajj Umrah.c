#include<stdio.h>
#include<string.h>


int main()
{
    char s[20];
    int i;
    i=1;

    while(gets(s))
    {
        if(strcmp(s,"*")==0)
        {
            break;
        }

        if(strcmp(s,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }

        else if(strcmp(s,"Umrah")==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
    }

    return 0;
}
