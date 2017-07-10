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
	bit = user >> (user2 - 1) & 1;

	printf("The previous bit was %d\n", bit);
			if (bit == 1) {
				printf("The new bit is %d\n", bit - 1);
			} else {
				printf("The new bit is %d\n", bit + 1);
			}


return 0;
}
