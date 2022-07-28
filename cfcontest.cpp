#include<iostream>
#include<string>
using namespace std;
int main(){
   /* ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(__null);*/
    int t;
    cin>>t;
    string s;
    
    int al=0,bo=0,sum=0;
    for(int i=0;i<t;i++){
        sum=0;
        cin>>s; 
        for(int j=0;j<s.size();j++){
           sum+=s[j]-96;
        }       
        if(s.size()%2==0){            
    cout<<"Alice "<<sum<<endl;
        }  

        else if(s.size()==1){
            bo=s[0]-96;
            cout<<"Bob "<<bo<<endl;
        }

        else if(s.size()%2!=0){
            int min;
            if(s[0]>=s[s.size()-1])min=s[s.size()-1]-96;
            else min=s[0]-96;
            {
                cout<<"Alice "<<sum-2*min<<endl;
            }
        }
       
    }


    return 0;
}
