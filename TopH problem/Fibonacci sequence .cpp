#include<bits/stdc++.h>
using namespace std;

map <long long int , long long int> d;

long long int rec(long long int a)
{
    long long int k;
    if(d.count(a))
        return d[a];


    else
    {
        k=a/2;
        if(a%2==0)
        {
            return d[a] =(rec(k) * rec(k) + rec(k - 1) * rec(k - 1)) % 1000000000;
        }
        else
        {
            return d[a]=(rec(k) * rec(k + 1) + rec(k - 1) * rec(k)) % 1000000000;
        }
    }
}
int main()
{
    long long int n,a,r;
    cin>>n;
    while(n--)
    {
        d[0]=1;
        d[1]=1;
        cin>>a;

        r=rec(a-1);
        cout<<r<<endl;



    }
    return 0;

}
