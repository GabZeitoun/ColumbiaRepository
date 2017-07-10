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
	

	printf("The bit is %d\n", bit);
	
	if (bit == 1) {
		bit = bit - 1;
		printf("The cleard bit is now %d\n", bit);
	} else {
		printf("The bit %d is already cleared\n", bit);
	}

return 0;
}
