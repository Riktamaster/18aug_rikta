//WAP to show Monday to Sunday using switch case

#include<stdio.h>
int main()
{
	int day;
	//to get day from user
	printf("Enter day(1-7):");//1-Monday, 2-Tuesday, 3-Wednesday, 4-Thursday, 5-Friday, 6-Saturday, 7-Sunday
	scanf("%d", &day);
	
	switch(day)//function to find out the day of the week with reference to number entered by the user
	{
		case 1: printf("Monday");
		break;
		case 2: printf("Tuesday");
		break;
		case 3: printf("Wednesday");
		break;
		case 4: printf("Thursday");
		break;
		case 5: printf("Friday");
		break;
		case 6: printf("Saturday");
		break;
		case 7: printf("Sunday");
		break;
		default: printf("Not a valid day!");
		
		return 0;
	}
}
