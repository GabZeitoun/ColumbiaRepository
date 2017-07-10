#include <stdio.h>

int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);
	
	if (num % 2 == 0) {
		printf("Your number is even\n"); }
	else {
		printf("Your number is odd\n"); }	


return 0;
}
