#include <stdio.h>

int main (int argc, char *argv[])
{
	int i=0, sum = 0;
	int array[] = {4, 6, 8, 2};

	for (i=0; i<4; i++) {
		sum = sum + array[i];
	}
	printf("%d\n", sum);



return 0;
}
