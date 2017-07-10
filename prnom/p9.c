#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int i = 0;
	int product = 0;

	while (i <= 10){
		product = n*i;
		printf("%d * %d = %d \n", n, i, product);
		i++;
	}


return 0;
}
