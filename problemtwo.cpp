#include <iostream>

int fibo(int n) {
    if (n <= 1) {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int sum = 0;
    int i = 2; 
    while (true) {
        int value = fibo(i);

        if (value >= 4000000) {
            break; 
        }
        if (value % 2 == 0) {
            sum += value;
        }

        i++;
    }

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}