/*
Problem Name : LOJ-1354- IP Checking
Problem Link : https://lightoj.com/problem/ip-checking
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2017-03-23
*/


#include<bits/stdc++.h>
using namespace std;
int ara[5],pra[5];

int arrange(char s[])
{
    int a,d=1,sum=0;

    for(int i=strlen(s)-1; i>=0; i--)
    {
        a= s[i]-'0';
        sum+=a*d;
        d=d*10;
    }

    return sum;
}
int binary(char s[])
{
    int a,d=0,sum=0;

    for(int i=strlen(s)-1; i>=0; i--)
    {
        a= s[i]-'0';
        if(a==1)
        {
            sum+= pow(2,d);
        }
        d++;
    }
    //cout<<sum<<" , ";
    return sum;
}

int main()
{
    int tc,kase=1;
    cin>>tc;
    getchar();
    while(tc--)
    {
        memset(ara,0,sizeof(ara));

        memset(pra,0,sizeof(pra));
        char s1[40],s2[40];
        scanf("%s %s",s1,s2);
//char s1[40]="65.254.63.122";
//char s2[40]="01000001.11111110.00111111.01111010";
        char *token;
        token=strtok(s1,".");
        //cout<<"For number = :";

        for(int i=0; i<4; i++)
        {
            ara[i]=arrange(token);
            token=strtok(NULL,".");
        }
        token=strtok(s2,".");
        // cout<<endl;
        bool flag=true;
        //cout<<"For binary : ";
        for (int i=0; i<4; i++)
        {
            pra[i] = binary(token);
            token=strtok(NULL,".");
        }
        for(int i=0; i<4; i++)
        {
            if(ara[i]!=pra[i])
            {
                flag=false;
                break;
            }
        }

        cout<<"Case "<<kase++<<": ";
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
