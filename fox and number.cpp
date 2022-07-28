#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];

    }
     sort(x.begin(), x.end());
     int min=10000;
     for(int i=0;i<n-1;i++){
         if(x[i+1]-x[i] < min){
             min = x[i+1]-x[i];
         }
     }
     cout<<min*n;

    return 0;

}