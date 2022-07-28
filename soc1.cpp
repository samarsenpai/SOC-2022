#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      string s;
      cin>>s;
      map<char,int> freq;
      for(int i=0;i<s.size();i++){
         freq[s[i]]++;
      }
      bool found1=false;
      for(auto it=freq.begin();it!=freq.end();it++){
          if(!found1){
          if((it->second)%2!=0){
           found1=true;
           continue;
          }
          }
          if((it->second)%2!=0){
              cout<<"NO SOLUTION";
              return 0;
          }
      }
      deque<char> e;
      int even,odd;
      for(auto it=freq.begin();it!=freq.end();it++){
        cout<<it->first<<" "<<it->second<<'\n';
        }
        cout<<'\n';
      for(auto it=freq.begin();it!=freq.end();it++){
          if((it->second)%2!=0){
            odd=it->second;
            while(odd--){
             e.push_back(it->first);
            }
          }
          else{
         even=(it->second)/2;
            while(even--){
             e.push_front(it->first);
             e.push_back(it->first);
             }
          }

      }
      cout<<"YES"<<'\n';
      for(int i=0;i<e.size();i++){
         cout<<e[i];
       }



return 0;
 }
