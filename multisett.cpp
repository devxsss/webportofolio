#include <bits/stdc++.h>
int main(){
int a,b,c;
cinn>>a;
multiset<pair<int,int>>a;
for(int i=0;i<a;i++){
  cin>>b;
a.insert({b,i});

}
while(!a.empty()){
  pair<int,int>p=a.begin();
  cout<<p[1]+1<<" ";
}
}