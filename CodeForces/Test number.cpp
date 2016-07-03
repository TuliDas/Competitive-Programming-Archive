#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n , i;
    while(cin>>n)
    {
        if((n%400==0) || (n%4==0 && n%100!=0))
        {
            cout<<n+28<<endl;
        }
        else
        {
            for(i=1; i<7; i++)
            {
                n++;
                if((n%400==0) || (n%4==0 && n%100!=0))
                {
                    i++;
                }
            }
            cout<<n<<endl;
        }

    }
    return 0;
}
