#include <stdio.h>

int main(int argc, char *argv[])
{
			long i = 1;
			long n = atoi(argv[1]);

	while (n/10  != 0) {
		n = n / 10;
		i++;
		}
printf("%ld", i);



return 0;
}
