#include <stdio.h>

int main (int argc, char *argv[])
{
	int user; 
	printf("Enter a number : ");
	scanf("%d", &user);

	int user2;
	printf("Enter nth of bit number : ");
	scanf("%d", &user2);

	int bit;
	bit = user >> (user2 - 1);

	if (bit&1) {
		printf("%d bit of %d is set \n", user2, user);
	} else {
		printf("%d bit of %d is not set\n ", user2, user);
	}








return 0;
}
