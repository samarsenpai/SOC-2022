#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      int tt;
      cin>>tt;
      while(tt--){
          long long n,q,sum=0,no=1;
          cin>>n>>q;
          long long can[n];
          for(int i=0;i<n;i++){
              cin>>can[i];
          }
          sort(can,can+n);
          map<long long,int> mp;
          for(int i=1;i<=n;i++){
              sum+=can[n-i];
              mp.insert(pair<long long,int>(sum,i));
          }
          while(q--){
              long long que,s=0;
              cin>>que;
              auto it = mp.lower_bound(que);
              if(it==mp.end())cout<<-1<<'\n';
              else cout<<it->second<<'\n';

          }


      }
return 0;
 }
