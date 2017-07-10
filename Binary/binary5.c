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
	
	int choice;
	printf("Do you want to change the bit : ");
	scanf("%d", &choice);

	if (choice == 1) {
		printf("The previous bit was %d\n", bit);
		int user3;
		printf("What new bit do you want ? ");
		scanf("%d", &user3);
			if (user3 == 1) {
				printf("The new bit is 1\n");
			} else {
				printf("The new bit is 0\n");
			}
	} else {
		printf("Bye\n");
	
	}



return 0;
}
