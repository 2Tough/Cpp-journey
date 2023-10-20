#include <iostream>
using namespace std;


int main() {
    int number, sum = 1;
    cout << "Provide a number to factorialize:";
    cin >> number;

    for (int i = 1; i < number; i++) {
        sum *= i+1;
    }
    cout << "The factorialized number is:";
    cout << sum;
    return 0;
}