#include <stdio.h>
	
int main (int argc, char *argv[])
{
	
	int m= 10;
	int *ptr;
	ptr=&m;
	*ptr = m;

	int n;
	int *ptr2;
	ptr2=&n;

	int o;
	int *ptr3;
	ptr3=&o;
	
	int z;

	printf("ptr stores the adress of m=%p\n", ptr);
	printf("*ptr stores the value of m=%d\n", *ptr);
	printf("&m stores the adress of m=%p\n", &m);
	printf("&n stores the adress of n=%p\n", ptr2);
	printf("&o stores the adress of o=%p\n", ptr3);
	printf("&z stores the adress of z=%p\n", &z);
	



return 0;
}
