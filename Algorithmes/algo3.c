#include <stdio.h>

int main (int argc, char *argv[]) {
	
	int num;
	printf("Enter the number of elements in your array :");
	scanf("%d", &num);
	int array[num];

	int m;	
	for (m=0; m<num; m++) {
		printf("element - %d: ",m);
		scanf("%d", &array[m]);
	
	}
	int user;
	printf("Enter a number : ");
	scanf("%d", &user);

	
	int i, flag = 0;
	for (i=0; i<num; i++) {
		if (user == array[i]) {
			flag = 1;
			break;
		} 
	}

	if (flag == 1) {
		printf("Your number is in the list\n");
	} else {
			printf("Your number is not in the list\n");
	}
	

	

return 0;
}
