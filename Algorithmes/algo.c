#include <stdio.h>

int main (int argc, char *argv[]) {
	
	int user;
	printf("Enter a number : ");
	scanf("%d", &user);

	int array[5] = { 1, 3, 5, 7, 9 };
	int i, flag;
	for (i=0; i<5; i++) {
		if (user == array[i]) {
			flag = 1;
			break;
		} 
	}

	if( flag == 1) {
		printf("Your number is in the list\n");
	} else {
			printf("Your number is not in the list\n");
	}
	

	

return 0;
}
