/**
 * QUite a lot of stuff already.
 * Modulos is an example of binary aritmetic op
 * Mod can only be done for int
 * Note that arithmetic expressions in programming are executed by BODMAS
 * However, you can use brackets to prioritize the order of op
 * I think that's all for now
 * One use of the unary operator is shown below
 * Note that the var value is unchanged.
 **/

#include <stdio.h>

int main()
{
	int salary = 127;
	int expend = 100;

	int total = salary - -expend;
	printf("%i\n %i\n", total, expend);	
	return 0;
}	
