#include<iostream>
using namespace std;

int powerOf2(int n ){
   if(n==0){
       return 1 ; 
   }
    int recusrionKaAns  = powerOf2(n-1) ; 
    int ans = 2* recusrionKaAns ; 

    return ans ;
}

int main(){
    cout << powerOf2(5) ; 
    return 0 ; 
    
}