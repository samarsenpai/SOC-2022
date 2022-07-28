#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      long long t,d;
      cin>>t;
      string s1,s2;
      for(long long i=0;i<t;i++){
          cin>>s1>>s2;
          d=0;
          bool flag=false,flag2=false;
          if(s2.size()==1){
              if(s2[0]==97){
                  d=1;
                  flag2=true;
              }
          }          
          for(long long j=0;j<s2.size();j++){
              if(s2[j]==97){
                  flag=true;
                  break;
              }
          }         
          if(flag==true && flag2==false)d=-1;
          else if(flag2==false){
               d=pow(2,s1.size());
          }
          cout<<d<<'\n';
      }
return 0;
 }