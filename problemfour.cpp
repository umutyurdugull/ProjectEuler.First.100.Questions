#include<iostream>
#include<string>
#include <list>

using namespace std;


int ReverseNumber(int n)
{
    string numString = to_string(n);
    int reversed;
    int temp = n;
    reversed = 0;
    while(temp!=0)
    {
        int bas = temp % 10;
        reversed = reversed * 10 + bas;
        temp /=10;
    }

    return reversed;
}

int main(){

  

}
