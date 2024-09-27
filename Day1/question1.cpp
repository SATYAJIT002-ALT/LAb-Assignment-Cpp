// Program to check if "Madhyamgram" is present between "Sealdah" and "Barasat"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string stations[] = {"Sealdah", "DumDum", "Birati", "Madhyamgram", "Barasat"};
    bool found = false;

    for(int i = 0; i < 5; i++) {
        if(stations[i] == "Madhyamgram") {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Madhyamgram is present between Sealdah and Barasat." << endl;
    else
        cout << "Madhyamgram is not present." << endl;

    return 0;
}
