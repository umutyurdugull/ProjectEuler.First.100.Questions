#include<iostream>
using namespace std;
bool checkPrime(int n) {
    
    if (n < 2) return false;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


void Solution(){


    long long limit = 2000000;
    long long sum = 0;
    for(int i = 0;i<limit;i++)
    {
        if(checkPrime(i) == true)
        {
            sum = sum + i;
        }
    }
    cout << "Sum : " << sum << endl;

}


int main(){

    Solution();


}