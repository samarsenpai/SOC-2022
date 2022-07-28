#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long a,b;

    for(int i=0;i<n;i++){
        cin>>a>>b;
     long long m=0;
    while(a!=0){
    if(a%b==0){
        a/=b;
        m++;
    }
    else if(a%b!=0){
        m+=a%b;
        a=(a/b)*b;

    }
    //cout<<"a= "<<a<<endl;

    }
    cout<<m<<endl;

}

    return 0;
}
