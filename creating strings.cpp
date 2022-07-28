#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fac(int n){
    if(n>=1)return fac(n-1)*n;
    else return 1;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      string s;
      cin>>s;
      map<char , int> freq;
      for(int i=0;i<s.size();i++){
          freq[s[i]]++;
      }
      ll total=fac(s.size());
     /* cout<<freq.size()<<'\n';

       for(auto it = freq.begin();it!=freq.end();it++){
          cout<<(it->second)<<'\n';
      }*/

      for(auto it = freq.begin();it!=freq.end();it++){
          total = total/fac((it->second));
      }
      cout<<total<<'\n';
      sort(s.begin(),s.end());
      cout<<s<<'\n';
      while(next_permutation(s.begin(),s.end())){
       cout<<s<<'\n';
      }
return 0;
 }
