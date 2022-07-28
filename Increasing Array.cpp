#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      ll n,x=0;
      cin>>n;
      ll a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      for(int i=0;i<n-1;i++){
          if(a[i]>a[i+1]){
              x+=a[i]-a[i+1];
              a[i+1]=a[i];              
          }
      }
      cout<<x;

return 0;
 }