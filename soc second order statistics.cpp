#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      int n;
      cin>>n;
      vector<int> a(n);
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      sort(a.begin(),a.end());
      for(int i=0;i<n;i++){
          if(a[i]!=a[0]){
              cout<<a[i];
              break;
          }
      }
return 0;
 }