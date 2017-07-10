#include <stdio.h>

int main (int argc, char *argv[])
{
	int a, msb;
	printf("Enter a number : ");
	scanf("%d", &a);
	
	msb = 1 << (sizeof(int)*8 - 1);	

	if (a & msb) {
		printf("MSB is set\n");
	} else {
		printf("MSB is not set\n");
	}


return 0;
}
