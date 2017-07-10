#include <stdio.h>

int main (int argc, char *argv[])
{
	int m = 29;
	
	printf("Adress of m : %p\n", &m);
	printf("Value of m : %d\n", m); 

	int *ab;
	ab = &m;
	*ab = m;
	
	printf("Adress of ab : %p\n", ab);
	printf("Value of m : %d\n", *ab);

	m = 34;
	printf("Adress of ab : %p\n", ab);
	printf("Value of m : %d\n", *ab);

	*ab = 7;
	printf("Adress of ab : %p\n", &m);
	printf("Value of m : %d\n", *ab);





return 0;
}
