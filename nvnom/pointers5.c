#include <stdio.h>

int add(int *,  int  *);
int main (int argc, char *argv[])
{
	int first, second, sum;

	printf("Entrez deux numéros\n");
	scanf("%d%d", &first, &second);

	sum =add(&first, &second);

	printf("%d + %d = %d\n", first, second, sum); 

return 0;
}

int add (int *x, int *y) {

	int sum;
	sum = *x + *y;

return sum;

}


