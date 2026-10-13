#include <iostream>
#include <string>
#include <algorithm>
#include<fstream>



using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int steadyGene(string gene) {
    int n = gene.size();
    int required = n / 4;

    int A = 0, C = 0, G = 0, T = 0;

    for (int i = 0; i < n; i++) {
        if (gene[i] == 'A') A++;
        else if (gene[i] == 'C') C++;
        else if (gene[i] == 'G') G++;
        else if (gene[i] == 'T') T++;
    }

    if (A == required && C == required &&
        G == required && T == required) {
        return 0;
    }

    int left = 0;
    int output = n;

    for (int right = 0; right < n; right++) {
        if (gene[right] == 'A') A--;
        else if (gene[right] == 'C') C--;
        else if (gene[right] == 'G') G--;
        else if (gene[right] == 'T') T--;

        while (A <= required && C <= required &&
               G <= required && T <= required) {

            output = min(output, right - left + 1);

            if (gene[left] == 'A') A++;
            else if (gene[left] == 'C') C++;
            else if (gene[left] == 'G') G++;
            else if (gene[left] == 'T') T++;

            left++;
        }
    }

    return output;
}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string gene;
    getline(cin, gene);

    int result = steadyGene(gene);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
