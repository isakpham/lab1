#include <iostream>
using namespace std;

bool isNumberPrime(int number) {
	int n = number;
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int nextPrime(int number) {
	int n = number - 1;
	do
	{
		if (isNumberPrime(n) == true)
		{
			return n;
		}
		n = n - 1;
	} while (n >= 2);
	return 0;
}

int main() {
	int input;
	cin >> input;
	cout << "The number is " << (isNumberPrime(input) ? "a prime" : "not a prime") << endl;
	cout << "The next prime number is " << nextPrime(input) << endl;
}