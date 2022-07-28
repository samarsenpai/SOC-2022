#include<iostream>
using namespace std;
int main(){
 int tt;
      cin>>tt;
      while(tt--){
           long long a,b;
           cin>>a>>b;
           if(max(a,b) > 2*min(a,b)){
               cout<<"NO"<<'\n';
               continue;
           }
           if((a+b)%3==0){
               cout<<"YES"<<'\n';
           }
           else cout<<"NO"<<'\n';
      }
return 0;
 }
