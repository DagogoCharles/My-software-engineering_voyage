#include <stdio.h>

int main()

{
	printf("The number of eggs for the day: ");

	int eggs;
	scanf("%i", &eggs); 	//use address of operator with scanf bcos var val will change.

	double dozen = (double) eggs/12;

	printf("You have %f dozen eggs. \n", dozen);
	
	return 0;

}
