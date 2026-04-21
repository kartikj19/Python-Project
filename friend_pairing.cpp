#include<iostream>
using namespace std ;
int f(int n){
 for(n > 2){
     return f(n-1) + (n-1)*f(n-2) ;
}
}
int main(){
    cout << f(5) << endl ;
    return 0 ;
}
     