#include<bits/stdc++.h>
using namespace std;
vector <long double> v;
//long double v[10000];
int main()
{
    long double k,n,a,i,j,c,p,b,x;

    cin>>n;
    while(n--)
    {
        cin>>a;
        c=2;
       for(i=2;i<=a;i++)
       {
           b=i-1;
           p=1;
           while(b--)
           {
               x=p/i;
               //v[k]=x;
               //k++;
              v.push_back(x);
              cout<<x<<endl;
              if(binary_search(v.begin(),v.end(),x))
              {
                  cout<<"1"<<endl;
              }
              else
              {
                  c++;
              }
              cout<<c<<endl;
              p++;
           }
       }
       //cout<<c<<endl;
    }


    return 0;

}

