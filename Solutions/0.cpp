/* 
A number is a perfect square, or a square number, if it is the square of a positive integer.
For example, 25 is a square number because 5^2 = 5 x 5 = 25 it is also an odd square.
The first 5 quare numbers are:  1,4,9,16,25 and the sum of the odd squares is 1 + 9 + 25 = 35
Among the first 447 thousand square numbers, what is the sum of all the odd squares?
*/

//Sum = (n(4n^2 -1) )/ 3

#include<iostream>
int main(){
    unsigned long long n = 447000 / 2;
    unsigned long long sum = (n * (4 * n * n - 1)) / 3;    
    std::cout << "Sum: " << sum << std::endl;    
    return 0;
}
