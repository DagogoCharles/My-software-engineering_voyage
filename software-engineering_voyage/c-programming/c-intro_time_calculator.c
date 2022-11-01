#include <stdio.h>
		//this program will calculate the amount of time remaining to cover the introduction to c course
int main()
{
	printf("How many minutes is this course?\n");
	int coursetime;
	scanf("%d", &coursetime);
		
	printf("How many minutes have you watched?");
	int watchedtime;
	scanf("%d", &watchedtime);

	double timeleft = (coursetime - watchedtime)/60;

	printf("You have %f more hours of course work!\n", timeleft);
	
	return 0;

}	

