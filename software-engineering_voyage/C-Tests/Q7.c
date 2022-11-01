#include <stdio.h>

int main()

{
	int n;
	printf("Please insert number\n");
	scanf("%i", &n);
	int *p = &n;


	printf("%i\n", n);
	return 0;

}	
