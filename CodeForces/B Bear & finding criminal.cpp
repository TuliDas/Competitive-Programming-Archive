#include<bits/stdc++.h>
using namespace std;
int a[110];

int main()
{
   int d,b;
   while(cin>>d>>b)
   {
       for(int i=0;i<d;i++)
       {
           cin>>a[i];
       }
       int c=0;

        if(a[b-1]==1)
           {
               c++;
           }
       int t=1;
       while(t<d)
       {
        if(a[b-1-t]==1 && b-1-t>=0 && a[b-1+t]==1 && b-1+t<d)
        {
            c++;
            c++;
        }
        else if(a[b-1-t]==1 && b-1+t>=d)
        {
          c++;
        }
        else if(a[b-1+t]==1 && b-1-t<0)
        {
            c++;
        }
        t++;
       }

       cout<<c<<endl;
   }

    return 0;
}
