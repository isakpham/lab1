#include <iostream>

using namespace std;

int input;

int bounce(int number) {
			
		if (number <= 0)
		{
			int i = 1;
			do
			{
				cout << i << endl;
				i++;
			} while (i < input);
			return input;
		}
		else
		{
			cout << number << endl;
			return (bounce(number - 1));
			cout << number << endl;
		}
	
	
}

int main() {
	cout << "Enter a number" << endl;
	cin >> input;
	if (input < 0 )
	{
		cout << "Error! input cannot be negative" << endl; 
	}
	else
	{
		cout << bounce(input) << endl;
	}
	
	system("pause");
	return 0;
}