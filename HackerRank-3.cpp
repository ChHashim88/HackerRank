#include<iostream>
using namespace std;


long countArray(int n, int k, int x) {
 long end1=1;
 long endother=0;
 
 for(int i=1;i<n;i++){
    long newend1=(k-1)*endother;
 long newendother=end1+(k-2)*endother;
 
 end1=newend1;
 endother=newendother;
 }
 if(x==1){
    return end1;
 }
 return endother;
}

int main(){
int n = 4;
    int k = 3;
    int x = 1;

    cout << countArray(n, k, x) << endl;

    return 0;
}