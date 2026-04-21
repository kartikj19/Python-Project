#include <iostream>
using namespace std;
int tp(int n){  //2 x n
    if(n==0 || n==1){ //base case
        return 1 ;
    }
    //vertical
    int ans1 = tp(n-1) ;
 
    //horizontal
    int ans2 = tp(n-2) ;

    return ans1 + ans2 ;
}
int main(){
    int n = 3 ;
    cout << tp(n) << endl ;
    return 0 ;
}



