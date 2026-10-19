#include<iostream>
#include<vector>
using namespace std;

int equal(vector<int> arr) {
    int n=arr.size();
    int smallest=arr[0];
    vector<int>arr2;
    int count=0;


    for(int i=0;i<n;i++){
       if(arr[i]<smallest){
        smallest=arr[i];
       }
      
    }
    
    for(int j=0;j<n;j++){
       arr2.push_back(arr[j]-smallest);
    }
    
    for(int k=0;k<n;k++){
        int diff = arr2[k];

          while(diff>0){
        if(diff>=5){
           diff-=5;
        }
        else if(diff>=2){
            diff-=2;
        }
        else{
            diff-=1;
        }
        count++;
    }
    
    }
    
return count;
}

int main(){

    equal({10 ,7 ,1});

    return 0;
}




// int equal(vector<int> arr) {
//     int n = arr.size();
//     int smallest = arr[0];

//     for (int i = 0; i < n; i++) {
//         if (arr[i] < smallest) {
//             smallest = arr[i];
//         }
//     }

//     int answer = INT_MAX;

//     for (int target = smallest; target >= smallest - 4; target--) {
//         int count = 0;

//         for (int i = 0; i < n; i++) {
//             int diff = arr[i] - target;

//             count += diff / 5;
//             diff %= 5;

//             count += diff / 2;
//             diff %= 2;

//             count += diff;
//         }

//         if (count < answer) {
//             answer = count;
//         }
//     }

//     return answer;
// }