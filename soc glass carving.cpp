#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
      int n,w,h;
      set<int> a[2];
      multiset<int> d[2];
      cin>>w>>h>>n;
      a[0].insert(0);
      a[0].insert(w);
      d[0].insert(w)
      a[1].insert(0);
      a[1].insert(h);
      d[1].insert(h);
      while(n--){
          int c,l;
          cin>>c>>l;
          int i = (c == 'H');
          a[i].insert(l);
          int x=*prev(a[i].lower_bound(l)) , y=*next(a[i].lower_bound(l));
          d[i].erase(d[i].find(y-x));
          d[i].insert(l-x);
          d[i].insert(y-l);
          cout<<(long long)*(prev(d[0].end()))**(prev(d[1].end()));

      }
return 0;
 }