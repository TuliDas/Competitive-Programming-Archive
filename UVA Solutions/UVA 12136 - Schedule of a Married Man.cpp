/*
Problem Name	: UVA 12136 - Schedule of a Married Man
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3288
Language	    : C++11
Solved on   	: 2017-03-15
*/


#include<bits/stdc++.h>
using namespace std;
map <pair<int,int> , bool > mp;
pair <int,int> p,p1,p2;
string w1,w2,m1,m2;
int W1,W2,M1,M2,W3,W4,M3,M4;

void loop(int val,int start,int last)
{
    for(int i=start; i<=last; i++)
    {
        p=make_pair(val,i);
        mp[p]=true;
    }
}

bool loop1(int val,int start,int last)
{
    for(int i=start; i<=last; i++)
    {
        p=make_pair(val,i);
        if(mp[p]==true)
            return false;
    }
    return true;
}

string correction(string s)
{
    string ss="     ";
    if(s.size()==4)
    {
        if(s[1]==':')
            s= '0' + s;
        else
        {
            ss[0]=s[0];
            ss[1]=s[1];
            ss[2]=':';
            ss[3]='0';
            ss[4]=s[3];
            s=ss;
        }
    }
    else if(s.size()==3)
    {
        ss[0]='0';
        ss[1]=s[0];
        ss[2]=':';
        ss[3]='0';
        ss[4]=s[2];
        s=ss;
    }
    return s;
}

int main()
{
  //  freopen("output.txt","w+",stdout);
    int tc;
    cin>>tc;

    int kase=1;

    while(tc--)
    {
        mp.clear();

        cin>>w1>>w2>>m1>>m2;
        w1=correction(w1);
        w2=correction(w2);
        m1=correction(m1);
        m2=correction(m2);
        W1= (w1[0]-'0')*10 + (w1[1]-'0')*1;
        W3=(w1[3]-'0')*10 + (w1[4]-'0')*1;
        W2= (w2[0]-'0')*10 + (w2[1]-'0')*1;
        W4=(w2[3]-'0')*10 + (w2[4]-'0')*1;
        M2= (m2[0]-'0')*10 + (m2[1]-'0')*1;
        M4= (m2[3]-'0')*10 + (m2[4]-'0')*1;
        M1= (m1[0]-'0')*10 + (m1[1]-'0')*1;
        M3= (m1[3]-'0')*10 + (m1[4]-'0')*1;
        //   cout<<W1<<":"<<W3<<"  "<<W2<<":"<<W4<<endl<<M1<<":"<<M3<<"  "<<M2<<":"<<M4<<endl;
        if(W1==W2)
        {
            if(W3<=W4)
                loop(W1,W3,W4);

            else
            {
                for(int i=W1; i<=23; i++)
                {
                    if(i==W1)
                        loop(W1,W3,59);

                    else
                        loop(i,0,59);
                }

                for(int i=0; i<=W2; i++)
                {
                    if(i==W2)
                        loop(W2,0,W4);

                    else
                        loop(i,0,59);

                }
            }
        }

        else  if(W2>W1)
        {
            for(int i=W1; i<=W2; i++)
            {
                if(i==W1)
                    loop(W1,W3,59);

                else  if(i==W2)
                    loop(W2,0,W4);
                else
                    loop(i,0,59);
            }
        }
        else
        {
            for(int i=W1; i<=23; i++)
            {
                if(i==W1)
                    loop(W1,W3,59);

                else
                    loop(i,0,59);
            }

            for(int i=0; i<=W2; i++)
            {
                if(i==W2)
                    loop(W2,0,W4);

                else
                    loop(i,0,59);

            }
        }

        bool flag=true;
        if(M1==M2)
        {
            if(M3<=M4)
                flag= loop1(M1,M3,M4);
            else
            {
                for(int i=M1; i<=23; i++)
                {
                    if(i==M1)
                    {
                        flag=loop1(M1,M3,59);
                        if(flag==false)
                            break;
                    }

                    else
                    {

                        flag=loop1(i,0,59);
                        if(flag==false)
                            break;
                    }
                }

                for(int i=0; i<=M2; i++)
                {
                    if(flag==false)
                        break;
                    else  if(i==M2)
                    {
                        flag=loop1(M2,0,M4);
                        if(flag==false)
                            break;
                    }

                    else
                    {
                        flag=loop1(i,0,59);
                        if(flag==false)
                            break;

                    }

                }
            }

        }


        else  if(M2>M1)
        {
            for(int i=M1; i<=M2; i++)
            {
                if(i==M1)
                {
                    flag=  loop1(M1,M3,59);
                    if(flag==false)
                        break;
                }

                else  if(i==M2)
                {
                    flag= loop1(M2,0,M4);
                    if(flag==false)
                        break;
                }
                else
                {
                    flag=loop1(i,0,59);
                    if(flag==false)
                        break;
                }
            }
        }
        else
        {
            for(int i=M1; i<=23; i++)
            {
                if(i==M1)
                {
                    flag=loop1(M1,M3,59);
                    if(flag==false)
                        break;
                }

                else
                {

                    flag=loop1(i,0,59);
                    if(flag==false)
                        break;
                }
            }

            for(int i=0; i<=M2; i++)
            {
                if(flag==false)
                    break;
                else  if(i==M2)
                {
                    flag=loop1(M2,0,M4);
                    if(flag==false)
                        break;
                }

                else
                {
                    flag=loop1(i,0,59);
                    if(flag==false)
                        break;

                }

            }
        }

        if(flag)
            cout<<"Case "<<kase++<<": Hits Meeting"<<endl;
        else
            cout<<"Case "<<kase++<<": Mrs Meeting"<<endl;

    }
}
