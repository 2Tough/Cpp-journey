#include <iostream>
using namespace std;


int main() {
    int number{};
    cout << "Provide a number to factorialize:"
    cin >> number;
    for (int i = 1; i <= number; i++) {
        number *= i;
    }
    cout << "The factorialized number is: " + number;
        

    return 0;
}