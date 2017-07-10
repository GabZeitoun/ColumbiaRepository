#include <stdio.h>

int main (int argc, char *argv[])
{
	int user;
	printf("Enter a number : ");
	scanf("%d", &user);
	
	if (user&1 == 1) {
		printf("The LSB is set\n");
	} else  {
		printf("The LSB is not set\n");
	}


return 0;
}
