
#include <iostream>
#include <string>
using namespace std;

int steadyGene(string gene) {
    int output = 0;
    int required=gene.size()/4;
    cout<<" Required per character .... "<<required<<endl;
    for (int i = 0; i < gene.size(); i++) {
        bool counted = false;

        for (int j = 0; j < i; j++) {
            if (gene[i] == gene[j]) {
                counted = true;
                break;
            }
        }

        if (counted) {
            continue;
        }

        int count = 0;

        for (int k = 0; k < gene.size(); k++) {
            if (gene[i] == gene[k]) {
                count++;
            }
        }
        
        cout << gene[i] << " " << count << endl;
       

      if (count > required) {
         output = count - required;
        }
      
    }
    cout <<"Output ......"<< output << endl;
   
    return 0;
}



int main() {
    steadyGene("GGGGAAAA");
    return 0;
}