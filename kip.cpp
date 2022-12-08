
    #include <stdio.h>
    #define ll long long int
    #include <queue>
    #include <vector>
    #include <iostream>
    #include <algorithm>
     
    using namespace std;
    typedef struct a{
      int id;
      int num;
    }k;
    k arr[1000000];
    bool ok(k lhs, k rhs){
      if(lhs.num<rhs.num){
        return true;
      }
      return false;
     
    }
    int main(){
      int to,k;
      cin>>to;
      for(int i=0;i<to;i++){
        cin>>arr[i].num;
        arr[i].id=i;
     
      }
      sort(arr.num,arr.num+to);
      for(int i=0;i<to;i++){
        cout<<arr[i].id+1<<" ";
     
      }
    }