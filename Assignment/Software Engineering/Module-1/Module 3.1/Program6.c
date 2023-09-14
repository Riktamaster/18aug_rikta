//WAP to convert years into days and days into years

#include<stdio.h>

int main()

{
	int years;
	printf("Enter no. of years:");
	scanf("%d", &years);
	printf("No. of days:%d",years*365);
	
	float days;
	printf("\nEnter no. of days:");
	scanf("%f", &days);
	printf("No. of years:%f", days/365);
	
	return 0;
}
