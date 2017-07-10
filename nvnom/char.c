#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = { 0 };
	char name[4] = { 'a' };
	
	//First print them out raw
	printf("Numbers : %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	
	printf("Name each : %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	
	printf("Name: %s\n", name);

	//Setup the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	//Setup name
	name[0] = 'N';
	name[1] = 'I';
	name[2] = 'C';
	name[3] = 'K';

	//Print them uninitialized
	printf("Numbers: %d %d %d %d\n",  numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("Name each : %c %c %c %c\n", name[0], name[1], name[2], name[3]);

	//Print them as a string
	printf("Names: %s\n", name);

	//Antoher way to use name
	char *another = "Nick";

	printf("another: %s\n", another);

	printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);


return 0;
}
