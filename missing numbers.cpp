#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      ll n;
      cin>>n;
      ll a[n-1],b[n];
      for(int i=0;i<n-1;i++){
          cin>>a[i];
          b[i]=i+1;
      }
      b[n-1]=n;
      sort(a,a+n-1);
      bool flag=false;
      for(int i=0;i<n-1;i++){
          if(a[i]!=b[i]){
              cout<<b[i];
              flag=true;
              break;
          }
      }
      if(!flag)cout<<b[n-1];


return 0;
 }
