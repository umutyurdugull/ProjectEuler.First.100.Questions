#include<iostream>
using namespace std;

bool isPalindrome(int n) {

	int original = n;
	int reversed = 0;
	while (n > 0)
	{
		int digit = n % 10;
		reversed = reversed * 10 + digit;
		n /= 10;
	}

	return original == reversed;
}


int Solution()
{
	long long result = 0;


	for (int i = 999;i >= 100;i--)
	{
		for (int j = i;j >= 100;j--)
		{
			int product = i * j;
			if (product <= result)
			{
				break;
			}
			if (isPalindrome(product))
			{
				result = product;
			}
		}
	}


	return result;

}

int main() {

	int x = Solution();
	cout << x << endl;


}