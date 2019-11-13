#include <stdio.h>

using namespace std;

int AskIfMarried(){
	char quesstion;
	printf("Are you married? y/n");
	scanf("%c",&quesstion);
	printf("%c", quesstion);
	if (quesstion == 'y' )
	{
		return 1;
	}
	return 0;
}

int main() {
	char name[20] = scanf("%c", name);
	printf("Whats your name?");
	
	
	for (int i = 0; i < sizeof(name); i++)
	{
		printf("%c", name[i]);
	}
	
	
	
	
	
	
	
	

}

