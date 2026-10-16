#include<iostream>
#include<vector>
using namespace std;

vector<int> maxSubarray(vector<int> arr) {
    vector<int> a;
    vector<int>result;
    int scAdd=0;
    int maxElement=arr[0];


    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){ 
            a.push_back(arr[i]);
        }
        if(arr[i]>maxElement){
            maxElement=arr[i];
        }
    }
    if(scAdd==0){
        scAdd=maxElement;
    }
    
    for (int j = 0; j < a.size(); j++) {
        scAdd+=a[j];
    }

    
//subarray
    int currentSum=arr[0];
    int maxSum=arr[0];

    for(int i=1;i<arr.size();i++){
        currentSum=max(arr[i],currentSum+arr[i]);
        maxSum=max(maxSum,currentSum);
    }

    
    cout<< maxSum <<"  "<< scAdd<<endl;

 result.push_back(maxSum);
 result.push_back(scAdd);
    
 return result;
}


int main(){
  maxSubarray({-1-2,-5,-6,-4});
    return 0;
}