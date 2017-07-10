 //New header files. What does each give you? Look into functions that you don't know. remember about man 2 function or man 3 function.
//Write a comment for every signel line explaining what it does in english
//Trace through each function and variable so you know where it comes from in the program
//Look up any symbols you don't understand

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

//create a new structure called Person and defines members
struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

//malloc, assert, 
struct Person *Person_create(char *name, int age, int height, int weight) 
{
	//allocates memeory and returns a pointer to it 
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);
	
	who->name = strdup(name); //duplicates string
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

//free
void Person_destroy(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who); //delocates the memory previously allocated 
} 

void Person_print (struct Person *who) 
{
	printf("Name: %s\n", who->name);
	printf("Age: %d\n", who->age);
	printf("Height: %d\n", who->height);
	printf("Weight: %d\n", who->weight);
}

//explain what main does here
int main(int argc, char *agrv[]) 
{
	//make two people structures
	struct Person *joe = Person_create("Joe Alex", 32, 53, 140); //settings of the person
	struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

	//print them out and where they are in memory
	printf("Joe is at memory location: %p\n", joe);
	Person_print(joe); //calls the function person_print and returns the person

	printf("Frank is at memory location: %p\n", frank);
	Person_print(frank);

	//make evryone age 20 years and print them again
	joe->age += 20;
	joe->height -= 2;
	joe->weight += 40;
	Person_print(joe);

	frank->age += 20;
	frank->height += 20;
	Person_print(frank);

	//destroy both so we can clean up
	Person_destroy(joe);
	Person_destroy(frank);

return 0;
}
	





















 
