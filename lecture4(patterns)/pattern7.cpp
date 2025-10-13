// pattern is 
// 1
// 23
// 345
// 4567

#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int i = 1;

    while(i<=n){
      int j = 1,counting =i ;
      while(j<=i){
        cout<<counting;
        j++;
        counting++;
    
      }
      cout<<endl;
      i++;
    }
}

