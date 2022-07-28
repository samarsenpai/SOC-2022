#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      long long t;
      cin>>t;
      while(t--){
          long long n;
          cin>>n;
          long long a[n];
          for(long long i=0;i<n;i++){
              cin>>a[i];
          }
          bool flag=true;
          long long c=0;
          for(long long i=0;i<n-1;i++){
              while(a[n-i-1]<=a[n-i-2]){
                  a[n-i-2]/=2;
                  c++;
              }
              if(a[n-i-2]==0 && i!=n-2){
                  flag=false;
                  break;
              }
          }
          if(flag==true)cout<<c<<'\n';
          else cout<<"-1"<<'\n';
      }
return 0;
 }