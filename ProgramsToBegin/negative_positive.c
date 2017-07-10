#include <stdio.h>

int main(int argc, char *argv[])
{ int number = atoi(argv[1]);


			if (number ==0) { printf("The number you entered is 0\n"); }

			else if (number > 0) { printf("Your number is positive \n"); }
		
			else if (number < 0) { printf("Your number is negative \n"); }
return 0;
}
