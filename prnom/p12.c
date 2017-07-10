#include <stdio.h>

int main (int arc, char *argv[])
{
	int first, last, sum;
	int n = atoi(argv[1]);

	last = n%10;

	while (n/10  != 0) {
		n = n / 10;
		}

first = n;


sum = first + last;
	printf("%d", sum);

return 0;
}
