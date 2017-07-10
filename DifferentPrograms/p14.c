#include <stdio.h>

int main(int argc, char*argv[])
{
	int n = atoi(argv[1]);
	int last, sum;

	
	while (n> 0) {
		last = n%10;
		sum = sum + last;
		n/=10;
	}
	printf("%d\n", sum);
		


return 0;
}
