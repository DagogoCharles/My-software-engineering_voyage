#include <stdio.h>

int main()
{
	char name[31];				//different data type variable declaration
	printf("What's your name fam? \n");
	scanf("%s", name); 			//no address of operator for string
	
	printf("Hello %s!\nYou looking sharp as usual!!\n", name);
	
	return 0;


}	
