#include<iostream>
#include<vector>
using namespace std;

long getWays(int n, vector<long> c) {
    vector<long>ways(n+1,0);
    ways[0]=1;

    for(int i=0;i<c.size();i++){
        for(int j=c[i];j<=n;j++){
            ways[j]=ways[j]+ways[j-c[i]];
        }
    }

    return ways[n];
}

int main(){
cout<<getWays(4,{8,1,3,2});

    return 0;
}