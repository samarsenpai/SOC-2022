#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      ll n,p=1,alpha=1e9 + 7;
      cin>>n;
      for(ll i=0;i<n;i++){
          p*=2;
          p = p % alpha;
      }
cout<<p;
      
return 0;
 }