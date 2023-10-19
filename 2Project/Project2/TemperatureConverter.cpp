#include <iostream>

void convertTemp() {
    int temp{ };
    int convertor{};
    
        std::cout << "Enter temperature to convert:";
        std::cin >> temp;
        convertor = temp * (9 / 5) + 32;
        std::cout << convertor;
}

int main() {
    convertTemp();
    return 0;
}