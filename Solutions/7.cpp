#include <iostream>

using namespace std; 

bool checkPrime(int n) {
    // 0 ve 1 asal değildir.
    if (n < 2) return false;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int asalSayac = 0;  
    int sayi = 2;        
    int hedef = 10001;   
    while (true) {
        if (checkPrime(sayi)) {
            asalSayac++; 
            
            if (asalSayac == hedef) {
                cout << "10001. Asal Sayi: " << sayi << endl;
                break;
            }
        }
        sayi++; 
    }

    return 0;
}