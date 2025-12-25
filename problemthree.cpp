#include <iostream>

using namespace std;

int main() {
    long long n = 600851475143;
    long long enBuyukAsal = 0;

    while (n % 2 == 0) {
        enBuyukAsal = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            enBuyukAsal = i;
            n /= i;
        }
    }

    if (n > 2) {
        enBuyukAsal = n;
    }

    cout << "En buyuk asal carpan: " << enBuyukAsal << endl;

    return 0;
}