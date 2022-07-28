#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      int t;
      cin>>t;
     while(t--){
         int n,m;
         cin>>n>>m;
         long long a[n],d=0,min=999;
         string s[n];
         for(int i=0;i<n;i++){
             cin>>s[i];
         }
         for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                 a[i]+=s[i][j];
             }
         }
         sort(a,a+n);
         for(int i=0;i<n-1;i++){
             d=a[i+1]-a[i];
             if(d<min)min=d;
         }
         cout<<min<<'\n';
     }
return 0;
 }