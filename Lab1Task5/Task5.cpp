#include <stdio.h>

using namespace std;



int main() {
	char name[20], address[20], gender ,nm, adrs, question;
	int age, married;
	float height;
	

	printf("Whats your name? ");
	scanf("%s", name);
	nm = getchar();
	
	printf("What's your gender? (m/f) ");
	scanf("%c", &gender);
	
	printf("How old are you? ");
	scanf("%d", &age);

	

	printf("Whats your address? ");
	scanf("%s", &address);
	adrs = getchar();

	printf("are you married? (y/n) ");
	scanf("%c", &question);
	if (question == 'y')
	{
		married = 1;
	}
	else
	{
		married = 0;
	}
	printf("How tall are you?(in metres) ");
	scanf("%f", &height);
	
	printf("your name is: " "%s", name);
	printf("\n");
	printf("you are: " "%d", age);
	printf(" years old");
	printf("\n");
	printf("you are: " "%f", height);
	printf(" metres tall");
	printf("\n");

	if (married == 1)
	{
		printf("You're married");
		printf("\n");
	}
	else
	{
		printf("you're not married");
		printf("\n");
	}
	
	printf("you live at: " "%s", address);
	printf("\n"); 
	
	
	
	
	
	
	

}

