#include <iostream>
#include <string>
#include <format>
#include <ppltasks.h>
#include "Project1.h"
using namespace std;
void stringReverser() {
    string word;
    cout << "Enter a word to reverse\n";
    cin >> word;
    for (int i = word.length(); i >= 0 ; i--) {
        cout << word[i];
    }
    
}

int main() {
    stringReverser();
    return 0;
}