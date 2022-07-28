#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      int t=0,x,y,a=0,b=0;
      cin>>t;
      for(int i=0;i<t;i++){
          a=0;
          b=0;
          cin>>x>>y;
          if(x>y || y%x!=0){
              a=0;b=0;
          }
          else{
              a=1;
              b=y/x;
          }
          cout<<a<<" "<<b<<'\n';
      }

return 0;
 }