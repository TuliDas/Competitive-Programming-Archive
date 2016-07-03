#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

struct node{
   lli p;
   lli q;
   lli level;
};
vector <node> q1;

lli pwroftwo(lli pwr){
   lli ans = 1;
   for(lli i = 0; i < pwr; i++)
      ans = ans * 2;
   return ans;
}

lli geometric_sum(lli in){
   if(in == 0)
      return 0;
   return (pwroftwo(in) - 1);
}

int main(){
   lli test,nq,tq,np,tp;
   cin >> test;

   for(lli a = 0; a < test; a++){
      q1.clear();
      lli p,q,n = 0;
      scanf("%lld/%lld",&p,&q);
      lli tp,tq;
      tp = p;
      tq = q;
      node ntemp;
      ntemp.p = p;
      ntemp.q = q;
      ntemp.level = 0;
      q1.push_back(ntemp);
      lli tlevel = 0;
      while(1){
         if(tp == tq == 1)
            break;
         node ntemp;

         if(tp > tq){
            lli temp_p;
            lli temp_q;
            temp_p = tp - tq;
            temp_q = tq;
            node parent;
            parent.p = temp_p;
            parent.q = temp_q;
            parent.level = tlevel + 1;
            tp = temp_p;
            tq = temp_q;
            q1.push_back(parent);
         }
         else{
            lli temp_p = tp;
            lli temp_q = tq - tp;
            node parent;
            parent.p = temp_p;
            parent.q = temp_q;
            parent.level = tlevel+1;
            tq = temp_q;
            tp = temp_p;
            q1.push_back(parent);
         }
         tlevel++;
      }
      //cout << q1.size() << endl;
      lli ans = geometric_sum(q1[q1.size()-1].level);
      //cout << "first: " << ans << endl;
      //q1.pop_back();
      //cout << ".";

      while(q1.size() > 0){
         node u = q1[q1.size()-1];
         q1.pop_back();
         //cout << u.p << " " << u.q << " " << u.level << endl;
         if(u.p > u.q){
            ans += pwroftwo(u.level);
         }
      }
      cout << ans + 1 << endl;
   }
}
