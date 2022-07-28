#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      int t;
      cin>>t;
      while(t--){
          long long n,q;
          cin>>n>>q;
          long long c[n],que,ans,totalsum=0;
          for(int i=0;i<n;i++){
              cin>>c[i];
              totalsum+=c[i];
          }
          sort(c,c+n);
          while(q--){
              cin>>que;
              ans=0;
              if(que>totalsum)cout<<-1<<'\n';
              long long sum=0;
              else{
                  for(int i=1;i<=n;i++){
                      ans++;
                      sum+=c[n-i];
                      if(sum>=que){
                          break;
                      }
                  }
                  cout<<ans<<'\n';

              }    
          }
      }
return 0;
 }