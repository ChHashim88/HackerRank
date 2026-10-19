#include<iostream>
using namespace std;

int cost(vector<int> B) {
    int n=B.size();
    int cost=0;

    for(int i=0;i<n;i++){
        cost+=abs(B[i]-B[i-1]);
    }
    cout<<cost<<endl;
return 0;
}


int main(){
     
    cost({10,1,10,1,10});


    return 0;
}