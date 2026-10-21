#include<iostream>
#include<vector>
using namespace std;

int lilysHomework(vector<int> arr) {
 
   int n=arr.size();
   vector<int>store(n);
   vector<int>numb(n);
   int temp=0;
   int count=0;
   int swap=0;
   int smallest=arr[0];
   int p=0;

   for(int k=0;k<n;k++){
        cout<<arr[k]<<"  ";
        store=arr;
        if(arr[k]<smallest){
            smallest=arr[k];
        }
    }
   
    cout<<endl;

    // for(int k=0;k<n-1;k++){
    //     if(arr[k]>arr[k+1]){
    //          store.push_back(arr[k]);
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
            arr[j]=temp;
            
            // swap++;
            
        }
       
      }
       
        cout<<arr[i]<<"  ";
        

    }
    cout<<endl;

    while(p<n){
        int t=0;
        if(arr[p]==store[t]){
            //cout<<arr[p]<<" and "<<store[p]<<"   ........   ";
            p++;
            t++;
        }

        else if(arr[p]!=store[t]){
            if(arr[p]<store[t]){
            // cout<<arr[p]<<" and "<<store[t]<<"   ........   ";
            arr[p++];
        }

            else if(arr[p]>store[t]){
                swap++;
            }
        }

    }
    
    // for(int y=0;y<n;y++){
    //      for(int x=0;x<n;x++){
            
    //         if(arr[y]==store[x] && y==x){
    //             continue;
    //         }
            
    //         else if(arr[y]!=store[x]){
    //             if(arr[y]<store[x]){
    //                cout<<arr[y]<<"       ";
    //                arr[y++];

    //             }
    //             else if(arr[y]>store[x]){
    //                 swap++;
    //             }
               
    //             // else if(arr[y++]!=store[x]){
    //             //     // cout<<arr[y]<<" and "<<store[x]<<"   ........  ";
    //             //      swap++;
    //             // }
               
    //         }
    //     }
    // }

// swap-=count;    
cout<<endl;
cout<<"Smallest is = "<<smallest<<endl;
cout<<"No of Swap = "<<swap<<endl;
return swap;
}


int main(){

  lilysHomework({2,5,3,1});
  cout<<endl;
  lilysHomework({3,4,2,5,1});
  cout<<endl;
  lilysHomework({6,5,6,0,8,5,7,4,4});


    return 0;
}