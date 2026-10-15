
#include <iostream>
using namespace std;

int redJohn(int n) {
   
    vector<int> ways(n+1,0);
    ways[0]=ways[1]=ways[2]=ways[3]=1;
    for(int i=4;i<=n;i++){
        ways[i]=ways[i-1]+ways[i-4];
    }
    
    int count = 0;
    int A=ways[n];
    

    for (int j = 2; j <= A; j++) {
            bool prime=true;

        for (int k = 2; k*k <= j; k++) {
            if (j % k == 0) {
                prime=false;
                break;
            }
        }

        if (prime) {
            count++;
        }
    }

    return count;
}

int main() {
    cout << redJohn(7) << endl;
    return 0;
}
