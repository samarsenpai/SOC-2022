#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      ll n;
      cin>>n;
      ll sum=0;
      sum=n*(n+1)/2;
      if(sum%2!=0){
          cout<<"NO";
          return 0;
      }
      sum/=2;
      vector<ll> a,b;
      for(int i=n;i>=1;i--){
          if(i<=sum){
              a.push_back(i);
              sum-=i;
          }
          else b.push_back(i);
      }
      cout<<"YES"<<'\n';
      cout<<a.size()<<'\n';
      for(int i=0;i<a.size();i++){
          cout<<a[i]<<" ";
      }
      cout<<'\n';
      cout<<b.size()<<'\n';
      for(int i=0;i<b.size();i++){
          cout<<b[i]<<" ";
      }
      

return 0;
 }