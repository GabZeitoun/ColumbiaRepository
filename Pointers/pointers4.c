#include <stdio.h>

int main(int argc, char *argv[])
{

	int n1, n2, sum, *p, *q;

	printf("enter the first number :\n");
	scanf("%d", &n1);
	printf("enter the second number :\n");
	scanf("%d", &n2);

	p = &n1;
	q = &n2;

	sum = *p + *q;
	printf("the sum is : %d\n", sum);

return 0;
}
