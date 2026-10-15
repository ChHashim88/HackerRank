#include<iostream>
using namespace std;


long stockmax(vector<int> prices) {
     int temp=0;
     int Day=0;
     long Total=0;

    for(int i=prices.size()-1;i>=0;i--){
      if(prices[i]>temp){
             temp=prices[i];
             Day=i+1;     
       }
        Total+=temp-prices[i];
    }
   
cout<<temp<<" On Day "<<Day<<" & total profit is "<<Total<<endl;
return Total;
}


int main(){
    
   cout<<stockmax({1,5,3,9})<<endl;

    return 0;
}