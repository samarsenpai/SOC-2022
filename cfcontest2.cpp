#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      int t,rec=27;
      cin>>t;
      string s,sub;
      for(int i=0;i<t;i++){
          rec=27;
          cin>>s;
          int x=s.size();
          bool same=false;
          for(int j=0;j<s.size();j++){
              if(s[j]==s[0]){
                  same = true;
              }
              else{
                   same = false;
                   break;
              }
          }
          if(same)cout<<"yes"<<'\n';
          else{
            for(int j=0;j<s.size();j++){
                for(int k=j+1;k<s.size();k++){
                    if(s[j]==s[k]){
                        if(rec>abs(k-j)){
                            rec=abs(j-k);
                            sub=s.substr(min(j,k),rec+1);
                        }

                    }                    
                }
            }
            //cout<<"rec = "<<rec<<'\n';
            bool flag=false;
            if(rec==27)cout<<"yes"<<'\n';
            else {
                for(int j=0;j<s.size();j++){
                    flag=false;
                    for(int k=0;k<sub.size();k++){
                        if(s[j]==sub[k]){
                            flag=true;
                            break;
                        }
                    }
                     if(flag==false){
                        cout<<"no"<<'\n';
                        break;
                    }
                
                }
                if(flag)cout<<"yes"<<'\n';

                
            }
          }
      }
return 0;
 }