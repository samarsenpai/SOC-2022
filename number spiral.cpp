#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
ll t;
cin>>t;
while(t--){
    ll x,y;
    cin>>x>>y;
    ll k=max(x,y);
    ll c=k*k-k+1;
    if(k%2==0){
         if(x==k)cout<<c+(k-y)<<endl;
         else cout<<c-(k-x)<<endl;               
                      
    }
    else {
        if(x==k)cout<<c-(k-y)<<endl;
        else cout<<c+(k-x)<<endl;
        }
    }
    
return 0;
}