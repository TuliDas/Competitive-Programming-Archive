
#include <iostream>

using namespace std;
unsigned long long f(unsigned long long n)
{
    if(n<10)
        return n;
    unsigned long long z=n;
    int fd;
    while(n)
    {
        fd=n%10;
        n/=10;
    }
    return (z/10)+9-(fd>(z%10));
}
int main()
{

    unsigned long long x,y;
    while(cin>>x>>y){
    cout<<f(y)-f(x-1)<<endl;}
    return 0;
}
