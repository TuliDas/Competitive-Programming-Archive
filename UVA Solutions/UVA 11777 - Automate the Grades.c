// Problem Name	: UVA 11777 - Automate the Grades
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2877
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2016-03-01


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,kase=1;
    cin>>tc;

    while(tc--)
    {
       int ans=0,n;
       for(int i=0;i<4;i++)
       {
           cin>>n;
           ans+=n;
       }


       int ara[3];
       for(int i=0;i<3;i++)
       {
           cin>>ara[i];
       }
       sort(ara,ara+3);
       ans = ans + (ara[2] +ara[1])/2;
       // printf("Ans = %d\n",ans);

       if(ans>=90)
       printf("Case %d: A\n",kase++);

        else  if(ans>=80)
       printf("Case %d: B\n",kase++);

        else  if(ans>=70)
       printf("Case %d: C\n",kase++);

        else  if(ans>=60)
       printf("Case %d: D\n",kase++);

       else
       printf("Case %d: F\n",kase++);


    }
}
