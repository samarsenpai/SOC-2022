#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      int n;
      cin>>n;
      vector<int> a(n),b={};
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      reverse(a.begin(), a.end());
      for(int i=0;i<n;i++){
          if(find(b.begin(),b.end(),a[i])==b.end())b.push_back(a[i]);
      }
      reverse(b.begin(),b.end());
      cout<<b.size()<<'\n';
      for(int i=0;i<b.size();i++){
          cout<<b[i]<<" ";
      }
return 0;
 }
