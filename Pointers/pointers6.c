#include <stdio.h>

int largest(int *,  int  *);
int main (int argc, char *argv[])
{
	int first, second, big;

	printf("Entrez deux numéros\n");
	scanf("%d%d", &first, &second);

	big =largest(&first, &second);

	printf("%d is the biggest number\n", big); 

return 0;
}

int largest (int *x, int *y) {

	int sum;
	if (*x > *y) {
		sum = *x; 
	} else {
		sum = *y;
	}

return sum;

}


