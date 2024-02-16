// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<char> intString({ 'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' }); 
    string text;
    cout << "Input text to cypher: ";  
    getline(cin, text); 
    cout << "Encoded message: "; 
    int n;
    n = 0;
    for (char n : text) { 
        if (90 > n && n >= 65) {
            cout << intString[n - 65];
        }
        if (122 > n && n >= 97) {
            cout << intString[n - 97];
            int upperCaseLetter(n - 32);
        }
        else {
            cout << n; 
        }
    }
}
