#include<iostream>
#include<vector>
using namespace std;

int lilysHomework(vector<int> arr) {
 
   int n=arr.size();
   vector<int>store=arr;
   vector<int>desc=arr;
   int temp=0;
   int swap=0;
   int swapdesc=0;
   int result=0;
  

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
            
        }
       }
       cout<<arr[i]<<"  ";
    }
    cout<<endl;

    //Desc

      for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
        if(desc[i]<desc[j]){
            
            temp=desc[i];
            desc[i]=desc[j];
            desc[j]=temp;
            
        }
       }
       cout<<desc[i]<<"  ";
    }
    cout<<endl;
    
    //Aesc
    for(int y=0;y<n;y++){

         if(store[y]==arr[y]){
                continue;
            }

         for(int x=y;x<n;x++){
            
           if(store[y] == arr[x] && y != x){
               int temp = arr[y];
               arr[y] = arr[x];
               arr[x] = temp;
               swap++;
               break;
               
            }
            
            
        }
     }
    //Desc
      for(int y=0;y<n;y++){

         if(store[y]==desc[y]){
                continue;
            }

         for(int x=y;x<n;x++){
            
           if(store[y] == desc[x] && y != x){
              
            temp = desc[y];
              desc[y] = desc[x];
              desc[x] = temp;
              swapdesc++;
              break;
            
            }
        }
     }

  

    // while(p<n){
    //   if(store[p]==desc[p]){
    //     p++;
    //     continue;
    //   }
    //      t=0;
         
    //   while(t<n){
    //     if(store[p]==desc[t] && p != t){
    //       temp=desc[t];
    //       desc[p]=desc[t];
    //       desc[t]=temp;
    //       swapdesc++;
    //       break;
    //       }

    //     t++;
    //   }
    // p++;
    // }
  
cout<<endl;
cout<<"No of Swap Aes =    "<<swap<<"     No of Swap Desc =   "<<swapdesc<<endl;
result=min(swap,swapdesc);
cout<<"Minimum Swaps = "<<result<<endl;

return result;;
}


int main(){

  lilysHomework({2,5,3,1});
  cout<<endl;
  lilysHomework({3,4,2,5,1});
  cout<<endl;
  lilysHomework({6,5,6,0,8,5,7,4,4});


    return 0;
}