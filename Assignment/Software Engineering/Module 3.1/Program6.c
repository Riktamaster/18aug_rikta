//WAP to convert years into days and days into years

#include<stdio.h>

int main()

{
	int years;
	//to get number of years from user
	printf("Enter no. of years:");
	scanf("%d", &years);
	//function to convert years into days
	printf("No. of days:%d",years*365);
	
	float days;
	//to get number of days from user
	printf("\nEnter no. of days:");
	scanf("%f", &days);
	//function to convert days into years
	printf("No. of years:%f", days/365);
	
	return 0;
}
