#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1 ;
	int n = atoi(argv[1]);

	while (n >= 1) {
		printf("%d \n", n);
		n--;
	}

return 0;
}
