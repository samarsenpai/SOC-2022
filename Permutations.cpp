#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      ll n,o=1,e=2;
      cin>>n;
      if(n==1){
          cout<<1;
          return 0;
      }
      if(n<=3){
          cout<<"NO SOLUTION";
          return 0;
      }
      if(n==4){
          cout<<3<<" "<<1<<" "<<4<<" "<<2;
          return 0;
      }
      while(o<=n){
          cout<<o<<" ";
          o+=2;
      }
       while(e<=n){
          cout<<e<<" ";
          e+=2;
      }


return 0;
 }
