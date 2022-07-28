#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      ll n,t=0,f=0,two=2,five=5,temp;
      cin>>n;
      temp=n;
      while(n/two>0){
          t+=n/two;
          two*=2;
      }
      n=temp;
      while(n/five>0){
          f+=n/five;
          five*=5;
      }
      cout<<min(t,f);
return 0;
 }