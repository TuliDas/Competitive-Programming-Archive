/*
Problem Name : CDF-535A-Tavas and Nafas
Problem Link : https://codeforces.com/contest/535/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/02/2016
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        if(s.size()==1)
        {
            if(s=="1")
                cout<<"one"<<endl;
            else if(s=="2")
                cout<<"two"<<endl;
            else if(s=="3")
                cout<<"three"<<endl;
            else if(s=="4")
                cout<<"four"<<endl;
            else if(s=="5")
                cout<<"five"<<endl;
            else if(s=="6")
                cout<<"six"<<endl;
            else if(s=="7")
                cout<<"seven"<<endl;
            else if(s=="8")
                cout<<"eight"<<endl;
            else if(s=="9")
                cout<<"nine"<<endl;
                else
                    cout<<"zero"<<endl;
        }
        else
        {
            if(s[1]=='0')
            {
                if(s=="10")
                    cout<<"ten"<<endl;
                else if(s=="20")
                    cout<<"twenty"<<endl;
                else if(s=="30")
                    cout<<"thirty"<<endl;
                else if(s=="40")
                    cout<<"forty"<<endl;
                else if(s=="50")
                    cout<<"fifty"<<endl;
                else if(s=="60")
                    cout<<"sixty"<<endl;
                else if(s=="70")
                    cout<<"seventy"<<endl;
                else if(s=="80")
                    cout<<"eighty"<<endl;
                else if(s=="90")
                    cout<<"ninety"<<endl;
            }

            else if(s[0]=='1')
            {
                if(s=="11")
                    cout<<"eleven"<<endl;
                else if(s=="12")
                    cout<<"twelve"<<endl;
                else if(s=="13")
                    cout<<"thirteen"<<endl;
                else if(s=="14")
                    cout<<"fourteen"<<endl;
                else if(s=="15")
                    cout<<"fifteen"<<endl;
                else if(s=="16")
                    cout<<"sixteen"<<endl;
                else if(s=="17")
                    cout<<"seventeen"<<endl;
                else if(s=="18")
                    cout<<"eighteen"<<endl;
                else if(s=="19")
                    cout<<"nineteen"<<endl;
            }
            else
            {
                if(s[0]=='2')
                    cout<<"twenty-";
                else if(s[0]=='3')
                    cout<<"thirty-";
                else if(s[0]=='4')
                    cout<<"forty-";
                else if(s[0]=='5')
                    cout<<"fifty-";
                else if(s[0]=='6')
                    cout<<"sixty-";
                else if(s[0]=='7')
                    cout<<"seventy-";
                else if(s[0]=='8')
                    cout<<"eighty-";
                else if(s[0]=='9')
                    cout<<"ninety-";

                if(s[1]=='1')
                    cout<<"one"<<endl;
                else if(s[1]=='2')
                    cout<<"two"<<endl;
                else if(s[1]=='3')
                    cout<<"three"<<endl;
                else if(s[1]=='4')
                    cout<<"four"<<endl;
                else if(s[1]=='5')
                    cout<<"five"<<endl;
                else if(s[1]=='6')
                    cout<<"six"<<endl;
                else if(s[1]=='7')
                    cout<<"seven"<<endl;
                else if(s[1]=='8')
                    cout<<"eight"<<endl;
                else if(s[1]=='9')
                    cout<<"nine"<<endl;

            }

        }

    }
}


 
