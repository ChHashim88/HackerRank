#include<iostream>
using namespace std;

int powerSumHelper(int X, int N, int num){
     int value=1;
     for(int i=0;i<N;i++){
        value=value*N;
     }
     if(value==X){
        return 1;
     }
     if(value>X){
        return 0;
     }
     return powerSumHelper(X-1,N,num+1)+powerSumHelper(X,N,num+1);

    }

   int powerSum(int X, int N) {
    return powerSumHelper(X,N,1);
   }

int main(){
    powerSum(10,2);
    return 0;
}