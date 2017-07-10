#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;
	int n = atoi(argv[1]);

	while (i <= n) {
			if (i % 2 != 0) { printf("%d \n", i); }
		
		i++;
	}

return 0;
}
