#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      int t;
      cin>>t;
      while(t--){
          long long m,n,sum=0;
          cin>>n>>m;
          vector<string> s;
          for(int i=0;i<n;i++){
              string temp;
              cin>>temp;
              s.push_back(temp);
          }
          vector<int> diff;
          for(int i=0;i<n;i++){
              for(int j=i+1;j<n;j++){
                  sum=0;
                  for(int k=0;k<m;k++){
                      sum+=abs( (int)s[i][k] - (int)s[j][k] );
                  }
                  diff.push_back(sum);
              }
          }
          sort(diff.begin(),diff.end());
          cout<<diff[0]<<'\n';
      }
return 0;
 }
