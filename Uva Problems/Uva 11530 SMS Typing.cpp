#include<stdio.h>
#include<string.h>

int main()

{
    int n,i;
    i=1;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        char s[100];
        int l,j,c;
        gets(s);
        l=strlen(s);
        c=0;

        for(j=0; j<l; j++)
        {
            if (s[j]=='a' || s[j]=='d' || s[j]=='g' || s[j]=='j' || s[j]=='m' || s[j]=='p' || s[j]=='t' || s[j]=='w' || s[j]==' ')
            {
                c=c+1;
            }
            else if(s[j]=='b' || s[j]=='e' || s[j]=='h' || s[j]=='k' || s[j]=='n' || s[j]=='q' || s[j]=='u' || s[j]=='x')
            {
                c=c+2;
            }

            else if(s[j]=='c' || s[j]=='f' || s[j]=='i' || s[j]=='l' || s[j]=='o' || s[j]=='r' || s[j]=='v' || s[j]=='y')
            {
                c=c+3;
            }

            else if(s[j]=='s' || s[j]=='z')
            {
                c=c+4;
            }

        }

        printf("Case #%d: %d\n",i,c);
        i++;
    }
    return 0;
}
