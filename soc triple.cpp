#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      int t;
      cin>>t;
      for(int i=0;i<t;i++){
          long long n;
          cin>>n;
          long long a[n];
          for(int j=0;j<n;j++){
              cin>>a[j];
          }
          unordered_map<int,int> freq;
          for(int j=0;j<n;j++){
               freq[a[i]]++;
          }
          bool flag=false;
          for(auto x : freq){
              if(x.second>=3){
                  flag=true;
                  cout<<x.first<<'\n';
                  break;
                }
          }
          if(flag==false)cout<<"-1"<<'\n';
      }
return 0;
 }
