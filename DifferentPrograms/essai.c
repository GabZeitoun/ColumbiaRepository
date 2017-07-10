#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int n = atoi(argv[1]);

	while (i <= n) {
		printf("%d \n", i);
		i++;
	}

return 0;
}
