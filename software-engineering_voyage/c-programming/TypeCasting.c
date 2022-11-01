#include <stdio.h>

int main()
{
	int slices = 17;
	int people = 2;	
	//you can add .0 to a constant or you can do explicit type casting//
	double SharedPizza = (double) (slices / people); //double is a unary op//

	printf("%f\n", SharedPizza);	
	return 0;
}	
