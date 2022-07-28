#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      int t;
      cin>>t;
      while(t--){
          bool df,cf;
          long long a,b,c,x,y;
          cin>>a>>b>>c>>x>>y;
          if(a>=x)df=true;
          else if(a+c>=x){
              df=true;
              c=c-(x-a);
          }
          else df=false;
          if(b+c>=y)cf=true;
          else cf=false;
          if(df==true && cf==true)cout<<"yes"<<'\n';
          else cout<<"no"<<'\n';

      }
return 0;
 }