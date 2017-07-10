#include <stdio.h>

int main(int argc, char *argv[]) {

	int num;
	printf("Enter the number of elements in your array : ");
	scanf("%d", &num);
	int array[num];

	int m;	
	for (m=0; m<num; m++) {
		printf("element - %d : ",m);
		scanf("%d", &array[m]);
	}

	int user;
	printf("Enter a number : ");
	scanf("%d", &user);

	int first = 0;
	int last = num - 1;
	int middle = (first+last)/2;
	
	while (first <= last) {
		if (array[middle] < user) {
			first = middle + 1;
		} else if (array[middle] == user) {
			printf("Your number %d is in the list at the position %d.\n", user, middle+1);
			break;
		} else {
			last = middle - 1;
		}
	middle = (first + last)/2;
	}

	if (first > last) {
		printf("Your number %d is not in the list.\n", user);
	}		



return 0;

}
	
