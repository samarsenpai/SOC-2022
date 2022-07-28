#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      string s;
      cin>>s;
      ll siz=1,max=0;
      for(int i=0;i<s.size();i++){
          if(s[i]==s[i+1]){
              siz++;
          }
          else siz=1;
          if(siz>max)max=siz;

      }
      cout<<max;

return 0;
 }