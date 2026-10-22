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
   int smallest=arr[0];
   int p=0;
   int t=0;

   for(int k=0;k<n;k++){
        cout<<arr[k]<<"  ";
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

    //Desc

      for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
        if(desc[i]<desc[j]){
            
            temp=desc[i];
            desc[i]=desc[j];
            desc[j]=temp;
            
            // swap++;
        }
       }
       cout<<desc[i]<<"  ";
    }
    cout<<endl;
    

    // while(t<n){
       
    //     if(store[p]==arr[t]){
    //         //cout<<arr[p]<<" and "<<store[p]<<"   ........   ";
    //         p++;
    //         t++;
    //         break;
    //     }
         
    //     else if(arr[p]!=store[t]){
    //        if(arr[p]<store[t]){
    //         cout<<"  less  than  "<<arr[p]<<" and "<<store[t]<<"   ........   ";
    //         swap++;
    //         p++;
    //         if(arr[p]==store[t]){
    //                 t++;
    //         }

    //     }

    //       else if(arr[p]>store[t]){
    //             cout<<"  greater than  "<<arr[p]<<" and "<<store[t]<<"   ........   ";
    //             p++;
    //             t++;
                
                
    //         }
    //     }
        
    //     else{
    //         p++;
    //     }

    //    }

    //     else if(arr[p]!=store[t]){
    //         p++;

    //         if (arr[p]==store[t]){
    //              cout<<" Equal "<<arr[p]<<" and "<<store[t]<<"   ........   ";
    //             p++;
    //             t++;
                
    //         }
        

    //         else if(arr[p]<store[t]){
    //         cout<<" less than "<<arr[p]<<" and "<<store[t]<<"   ........   ";
           
    //     }

    //         else if(arr[p]>store[t]){
    //             cout<<"  greater than  "<<arr[p]<<" and "<<store[t]<<"   ........   ";
    //             p++;
    //             t++;
    //              swap++;
                
    //         }
            
    //     }
    //     //      else if(arr[p]<store[t]){
    //     //     cout<<" less than "<<arr[p]<<" and "<<store[t]<<"   ........   ";
    //     //     swap++;
    //     // }
    // }
    
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
                // else if(arr[y++]!=store[x]){
                //     // cout<<arr[y]<<" and "<<store[x]<<"   ........  ";
                //      swap++;
                // }
               
            }
            cout<<arr[x]<<"    ";
            
        }
     }

      for(int y=0;y<n;y++){

         if(store[y]==desc[y]){
                continue;
            }

         for(int x=y;x<n;x++){
            
           if(store[y] == desc[x] && y != x){
              
            int temp = desc[y];
              desc[y] = desc[x];
              desc[x] = temp;
              swapdesc++;
              break;
            
            }
            cout<<desc[x]<<"    ";
        }
     }

    // while(p<n){
    //   if(store[p]==arr[p]){
    //     p++;
    //     continue;
    //   }
    //   t=0;
    // while(t<n){
    //    if(store[p]==arr[t] && p!=t){
    //       temp=desc[t];
    //       desc[p]=desc[t];
    //       desc[t]=temp;
    //       swapdesc++;
          
        
    //   }
    //   t++;
    // }
    //  p++;
    // }
// swap-=count;    
cout<<endl;
cout<<"Smallest is = "<<smallest<<endl;
cout<<"No of Swap Aes =    "<<swap<<"     No of Swap Desc =   "<<swapdesc<<endl;
return min(swap,swapdesc);
}


int main(){

  lilysHomework({2,5,3,1});
  cout<<endl;
  lilysHomework({3,4,2,5,1});
  cout<<endl;
  lilysHomework({6,5,6,0,8,5,7,4,4});


    return 0;
}