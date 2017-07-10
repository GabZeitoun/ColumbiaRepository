#include <stdio.h>


int main(int argc, char *argv[])
{
	int grade1 = atoi(argv[1]);
	int grade2 = atoi(argv[2]);
	int grade3 = atoi(argv[3]);
	int grade4 = atoi(argv[4]);	
	int grade5 = atoi(argv[5]);
	
	int total = grade1 + grade2 + grade3 + grade4 + grade5;
	double moyenne = total / 5;
	printf("Your average is %f. \n", moyenne);
return 0;
}
