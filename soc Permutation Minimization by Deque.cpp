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
          deque<long long> d(n),d2;
          for(int j=0;j<n;j++){
              cin>>d[j];
          }
          d2.push_back(d[0]);
          for(int j=1;j<n;j++){
              if(d[j]<d2[0])d2.push_front(d[j]);
              else d2.push_back(d[j]);

          }
          for(int j=0;j<n;j++){
              cout<<d2[j]<<" ";
          }
          cout<<endl;
      }
return 0;
 }