#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      ll n;
      cin>>n;
      for(ll i=1;i<=n;i++){
          cout<<i*i*(i-1)*(i+1)/2 - 4*(i-1)*(i-2)<<'\n';
      }
return 0;
 }