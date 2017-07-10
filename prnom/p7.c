#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;
	int n = atoi(argv[1]);
	int sum = 0;



		while (i <= n) {
					if (i % 2 == 0) {
					
					sum = sum + i; }
		i++;
				}
		printf("%d \n", sum);

return 0;
}
