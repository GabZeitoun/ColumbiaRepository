#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10, 12, 13, 14, 20 };
	char name[] = "Nick";
	char full_name[] = {'N', 'I', 'C', 'K', ' ', 'M', 'E', 'L', '\0'};
	
	printf("The size of an int is: %u\n", sizeof(int));
	printf("The size of areas (int[]) is: %u\n", sizeof(areas));

	printf("The number of ints in areas is: %u\n", sizeof(areas)/sizeof(int));
	printf("The first area is %u, the second is %d\n", areas[0], areas[1]);

	printf("The size of char is: %u\n", sizeof(char));
	printf("The size of name (char[]) is :%u\n", sizeof(name));
	printf("The number of chars: %u\n", sizeof(name)/sizeof(char));

	printf("The size of full_name (char[]) is: %u\n", sizeof(full_name));
	printf("The number of chars: %u\n", sizeof(full_name)/sizeof(char));
	
	printf("name\"%s\" and full_name=\"%s\"\n", name, full_name);



return 0;
}
