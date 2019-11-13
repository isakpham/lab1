#include <stdio.h>
using namespace std;

char input, alphabet = 'A';


void halfPyrtamidNumbers(int rows) {
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}

void halfPyramidLetters(char letter) {
	for (int i = 1; i < (letter - 'A' + 2); i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%c", alphabet);

		}
		alphabet++;
		printf("\n");
	}


}
void numberOrLetter(char input) {
	int checkNumberLetter = input;
	int newnumber;
	if (checkNumberLetter >= 65 && checkNumberLetter <= 90)
	{
		halfPyramidLetters(input);
	}
	if (checkNumberLetter >= 49 && checkNumberLetter <= 57)
	{
		newnumber = checkNumberLetter - '0';
		halfPyrtamidNumbers(newnumber);
	}
	
}


int main() {
	printf("Enter a uppercase letter or a number you want to use : ");
	scanf("%c", &input);
	numberOrLetter(input);
}
