#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int j=1; j<=n; j++)
    {
        int m;
        cin>>m;
        if(m>=80 && m<=100)
            cout<<"Case "<<j<<": A+"<<endl;

        else if(m>=75 && m<=79)
            cout<<"Case "<<j<<": A"<<endl;

        else if(m>=70 && m<=74)
            cout<<"Case "<<j<<": A-"<<endl;

        else if(m>=65 && m<=69)
            cout<<"Case "<<j<<": B+"<<endl;

        else if(m>=60 && m<=64)
            cout<<"Case "<<j<<": B"<<endl;

        else if(m>=55 && m<=59)
            cout<<"Case "<<j<<": B-"<<endl;

        else if(m>=50 && m<=54)
            cout<<"Case "<<j<<": C"<<endl;

        else if(m>=45 && m<=49)
            cout<<"Case "<<j<<": D"<<endl;

        else if(m>=0 && m<=44)
            cout<<"Case "<<j<<": F"<<endl;
    }
    return 0;

}
