#include <stdio.h>
#include <math.h>
		//this program takes two doubles a & b as inputs, then uses them to calculate the hyp of a triangle ==> c
		//

int main()
{
	double a;
	double b;
	
	printf("Please input the value for a: \n");
	scanf("%lf", &a);
	
	printf("Please input the value for b: \n");
	scanf("%lf", &b);
	
	double c = (a*a) + (b*b);

	printf("The hypothenus is: %f\n", c);	
	return 0;
}	
