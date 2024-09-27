// Program to check if Roll number 1 is present in class
#include <iostream>
using namespace std;

int main() {
    int rolls[] = {5, 8, 2, 1, 10};
    bool found = false;

    for(int i = 0; i < 5; i++) {
        if(rolls[i] == 1) {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Roll number 1 is present in class." << endl;
    else
        cout << "Roll number 1 is not present." << endl;

    return 0;
}
