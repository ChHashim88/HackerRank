#include<iostream>
#include<string>
#include<vector>
using namespace std;

int commonChild(string s1, string s2) {
    int n = s1.size();
    int m= s2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    
    
    for(int i=1;i<=s1.size();i++){
         for(int j=1;j<=s2.size();j++){
            if(s1[i-1]==s2[j-1]){
                 dp[i][j]=dp[i-1][j-1]+1;
               }
            else if(dp[i-1][j]>dp[i][j-1]){
                dp[i][j]=dp[i-1][j];
               }
            else{
                dp[i][j]=dp[i][j-1];
            }
        }
    
    }

return dp[n][m];
}


int main(){

cout<<commonChild("SHINCHAN","NOHARAAA");

    return 0;
}