#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	//Go through each string in argv
	for (i=1; i<argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	//let's make our own array of strings
	char *states[] = {"california", "New York", "Oklahoma", "Texas"};

	int num_states = 4;

	for(i=0; i <num_states; i++) {
		printf("state %d: %s\n", i+1, states[i]);
	}

	


return 0;
}  
