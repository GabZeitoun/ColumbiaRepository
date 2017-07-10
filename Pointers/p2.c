#include <stdio.h>

int main (int argc, char *argv[])
{
	int i = 0;
	int array[] = {5, -5, 7, -456 };

	for (i=0; i<4; i++) {
		if (array[i] < 0) {
				printf("%d\n", array[i]);
		} else {
				printf("\n");
		}
	}

return 0;
}
