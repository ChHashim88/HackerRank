#include<iostream>
using namespace std;

int pairs(int k, vector<int> arr) {
    int count=0;

   for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr.size();j++){
         
        if(arr[i]-arr[j]==k){
         count++;
     }
   }
   }
   return count;
}

int main(){
 
   cout<<pairs(2,{1, 5, 3, 4, 2});

    return 0;
}


// int pairs(int k, vector<int> arr) {
//     sort(arr.begin(), arr.end());

//     int count = 0;
//     int i = 0;
//     int j = 1;

//     while (j < arr.size()) {
//         int diff = arr[j] - arr[i];

//         if (diff == k) {
//             count++;
//             i++;
//             j++;
//         }
//         else if (diff < k) {
//             j++;
//         }
//         else {
//             i++;
//         }

//         if (i == j) {
//             j++;
//         }
//     }

//     return count;
// }