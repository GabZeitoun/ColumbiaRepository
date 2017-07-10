#include <stdio.h>

int main (int argc, char *argv[])
{
	int m = 300;
	double fx = 300.600006;
	char cht = 'z';

	printf("adress of m = %p\n", &m);
	printf("adress of fx = %p\n", &fx);
	printf("adress of cht = %p\n\n\n", &cht);

	printf("value of adress at m = %d\n", m);
	printf("value of adress at fx = %f\n", fx);
	printf("value of adress at chat = %c\n\n\n", cht);

	int *ptrm;
	double *ptrfx;
	char *ptrcht;
	ptrm = &m;
	ptrfx = &fx;
	ptrcht = &cht;

	printf("adress of m = %p\n", ptrm);
	printf("adress of fx = %p\n", ptrfx);
	printf("adress of cht = %p\n\n\n", ptrcht);
	
	*ptrm = m;
	*ptrfx = fx;
	*ptrcht = cht;

	printf("value of adress at m = %d\n", *ptrm);
	printf("value of adress at fx = %f\n", *ptrfx);
	printf("value of adress at cht = %c\n\n\n", *ptrcht);


return 0;
}
