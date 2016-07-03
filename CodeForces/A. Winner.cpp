#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ws;
    int n,wn,p;
    while(cin>>n)
    {
        wn=0;
        for(int i=0;i<n;i++)
        {
            cin>>s>>p;
            if(p>wn)
            {
                wn=p;
                ws=s;
            }
        }
        cout<<ws<<endl;
    }
    return 0;
}
