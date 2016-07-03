#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,c;
    while(cin>>n)
    {
        if(((n%400==0) || (n%4==0 && n%100!=0)) && (((n+28)%400==0) || ((n+28)%4==0 && (n+28)%100!=0)))
        {
            {
                cout<<n+28<<endl;
            }
        }

            else
            {
                c=0;

                while(true)
                {
                    if((n%400==0) || (n%4==0 && n%100!=0))
                        c=c+2;
                    else
                    {
                        c=c+1;
                    }
                    cout<<c<<endl;
                    if(c%7==0)
                        break;
                    n++;
                }
                cout<<n+1<<endl;

            }
        }


        return 0;
    }




