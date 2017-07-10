#include <stdio.h>

int main (int arc, char *argv[])
{
	int first, last;
	int n = atoi(argv[1]);

	last = n%10;

	while (n/10  != 0) {
		n = n / 10;
		}

	first = n;
	printf("%d and %d", first, last);

return 0;
}
