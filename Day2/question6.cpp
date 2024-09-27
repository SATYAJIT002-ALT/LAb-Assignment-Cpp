// WAP a C++ program to implement copy, concatenate, and compare two strings without using library functions
#include<iostream>
using namespace std;

void copyString(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

void concatenateString(char *dest, const char *src) {
    while (*dest) dest++;
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int compareStrings(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() {
    char str1[100], str2[100], strCopy[100], strConcat[200];

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    // Copy strings
    copyString(strCopy, str1);
    cout << "Copied string: " << strCopy << endl;

    // Concatenate strings
    concatenateString(strConcat, str1);
    concatenateString(strConcat, str2);
    cout << "Concatenated string: " << strConcat << endl;

    // Compare strings
    int cmp = compareStrings(str1, str2);
    if (cmp == 0)
        cout << "Strings are equal" << endl;
    else if (cmp > 0)
        cout << "First string is greater" << endl;
    else
        cout << "Second string is greater" << endl;

    return 0;
}
