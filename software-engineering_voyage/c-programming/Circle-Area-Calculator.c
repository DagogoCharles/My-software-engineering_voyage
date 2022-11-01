#include <stdio.h>  			//this is the variable library

int main() 				//initializing code block for program that will calculate the area of a circle
{
	int radius;			//declaring the variable radius
	printf("Please Input Radius Value: "); 	//user prompt requesting input
	scanf("%i", &radius);			//scan function to change value of var

	double area = 3.14159 * (radius * radius);	//note different data type
	printf("The area of a circle with %i radius is %f\n", radius, area); 	//program output
	return 0;

}	
