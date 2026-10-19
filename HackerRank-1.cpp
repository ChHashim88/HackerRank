
#include <iostream>
using namespace std;

int sherlockAndAnagrams(string s) {
int count=0;
for(int i=0;i<s.size();i++){
    for(int j=i;j<s.size();j++){
        
        for(int x=i+1;x<s.size();x++){
             for(int y=x;y<s.size();y++){
                 if(j-i==y-x){
                    int freq[26]={0};
                    for(int k=i;k<=j;k++){
                        freq[s[k]-'a']++;
                    }
                    for(int k=x;k<=y;k++){
                        freq[s[k]-'a']--;
                    }
                    
                    bool same=true;
                    for(int k=0;k<26;k++){
                        if(freq[k] != 0){
                            same=false;
                            break;
                        }
                  
                    }
                      if(same){
                        count++;
                    }
                    
                 }
        
              }
        }
    }
}

return count;
}

int main() {
    cout << sherlockAndAnagrams("abba");
    return 0;
}
