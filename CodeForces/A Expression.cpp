#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,c;
    int y[5];
    while(cin>>a>>b>>c)
    {
        y[0]=a+b*c;
        y[1]=a*(b+c);
        y[2]=a*b*c;
        y[3]=(a+b)*c;
        y[4]=a+b+c;
        sort(y,y+5);
        cout<<y[4]<<endl;
    }
    return 0;
}
