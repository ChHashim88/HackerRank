#include<iostream>
using namespace std;

int lilysHomework(vector<int> arr) {
   int n=arr.size();
   int temp=0;
   int count=0;
   int smallest=arr[0];

   for(int k=0;k<n;k++){
    cout<<arr[k]<<"  ";
        if(arr[k]<smallest){
            smallest=arr[k];
        }
    }
   
    // for(int k=0;k<n-1;k++){
    //     cout<<arr[k]<<"  ";

    //     if(arr[k]>arr[k+1]){
    //         cout<<arr[k]<<" Is greater than "<<arr[k+1]<<endl;
    //         count++;
    //     }
    // }

    cout<<endl;

    for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
             count++;
            arr[j]=temp;
           
            }
        }
     
        cout<<arr[i]<<"  ";
    }


cout<<endl;
cout<<"Smallest is = "<<smallest<<endl;
cout<<"No of counts = "<<count<<endl;
return count;
}


int main(){

  lilysHomework({2,5,3,1});
  cout<<endl;
  lilysHomework({3,4,2,5,1});
  cout<<endl;
  lilysHomework({6,5,6,0,8,5,7,4,4});

    return 0;
}