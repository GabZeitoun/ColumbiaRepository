#include <stdio.h>

int main (int argc, char *argv[])
{
		int i = 0;
		int array[] = {1 , 2 , 3 , 4};
		int min = array[0];
		int max = array[0];

	for (i=0; i<4; i++) {
		if (array[i] < min) {
			min = array[i] ;
		}
		

	}

	for (i=0; i<4; i++) {
		if (array[i] > max) {
			max = array[i];
		}
		
	}

		printf("the min is %d\n", min);
		printf("the max is %d\n", max);
		
		
			

return 0;
}
