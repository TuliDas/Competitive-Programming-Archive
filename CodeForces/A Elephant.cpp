#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c;
    while(cin>>n)
    {
        if(n%5==0)
            c=n/5;
        else
        {
            c= n/5 + 1;
        }
        cout<<c<<endl;
    }

    return 0;
}

