#include <iostream>

void Solution() {
    int total = 1000;

    for (int a = 1; a < total / 3; a++) {

        for (int b = a + 1; b < total / 2; b++) {

            int c = total - a - b;

            if (a * a + b * b == c * c) {
                long long carpim = (long long)a * b * c;

                std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
                std::cout << "Carpim: " << carpim << std::endl;

                return; 
            }
        }
    }
}

int main() {
    Solution();
    return 0;
}