#include<iostream>
#include<numeric>

long long gcd(long long a, long long b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
	if (a == 0 || b == 0) return 0;
	return (a / gcd(a, b)) * b;
}

void Solution(){
	
	long long result = 1;
	for (long long i = 2;i <= 20;i++)
	{
		result = lcm(result, i);
	}
	std::cout << result << std::endl;
}

int main() {

	Solution();

}