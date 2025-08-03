/*
Problem Name : LOJ-1225-Palindromic Numbers (II)
Problem Link : https://lightoj.com/problem/palindromic-numbers-ii
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-10-12
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[15];
    int j,n,test;
    j=1;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        test=1;
        gets(s);

        int ll,l=strlen(s);
        ll=l;

        for(int i=0;i<l;i++)
        {
            if(s[i]!=s[ll-1])
                test=0;

            ll--;
        }

        if(test==1)
        printf("Case %d: Yes\n",j++);
        else
        printf("Case %d: No\n",j++);

    }
    return 0;

}
