#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      int t;
      cin>>t;
      string s;
      for(int i=0;i<t;i++){
          cin>>s;
          int r=0;
          r=(s[0]-97)*25+(s[1]-96);
          if(s[1]>s[0])r=r-1;
          cout<<r<<'\n';
      }
return 0;
 }