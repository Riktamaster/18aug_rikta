//WAP to check if the given year is a leap year or not

#include<stdio.h>

int main()

{
	int year;
	//to get value of year from user
	printf("Enter a year:");
	scanf("%d", &year);
	
	//function to find out whether the year entered by user is leap year or not
	if(year %4 == 0){
	printf("%d is a leap year",year);
	}
	
	else{
	printf("%d is not a leap year",year);
	}

	return 0;
}
