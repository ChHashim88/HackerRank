#include <iostream>
#include <string>
using namespace std;

int substrings(string n) {
    long long subValue = 0;
    long long Total = 0;
    const long long MOD = 1000000007;

    for (int j = 0; j < n.size(); j++) {
        for (int k = j + 1; k <= n.size(); k++) {
            subValue = 0;

            for (int y = j; y < k; y++) {
                subValue = subValue * 10 + (n[y] - '0');
                subValue %= MOD;
            }

            Total = (Total + subValue) % MOD;
        }
    }

    return Total;
}

int main() {
    cout << substrings("123") << endl;
    return 0;
}



// int substrings(string n) {
//     long long currentSum = 0;
//     long long Total = 0;
//     const long long MOD = 1000000007;

//     for (int i = 0; i < n.size(); i++) {
//         int digit = n[i] - '0';

//         currentSum = (currentSum * 10 + digit * (i + 1LL)) % MOD;
//         Total = (Total + currentSum) % MOD;
//     }

//     return Total;
// }



// #include<iostream>
// using namespace std;

// int substrings(string n) {
//     int currentSum=0;
//     int subValue=0;
//     int Total=0;

//     for(int i=0;i<n.size();i++){
//         currentSum = currentSum * 10 + (n[i]-'0');
        
//     }

//     for(int j=0;j<1;j++){
//         for(int k=2;k<=n.size();k++){
//            for(int y=j;y<k;y++){
//                cout<< n[y];
//                subValue = subValue * 10 + (n[y] - '0');
//            }
//             cout<<endl;
//         }
        
    
//     }


//     Total=currentSum+subValue;
//     cout<<Total<<endl;
//     return Total;
// }


// int main(){

// substrings("123456");

//     return 0;
// }