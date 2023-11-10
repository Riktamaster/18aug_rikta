//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>

int main()
{
	int num, remainder, rev_num;
	//to get number from user
	printf("Enter number:");
	scanf("%d", &num);
	//loop to reverse the order of the number entered by the user
	while (num!=0)
	{remainder=num%10;
	rev_num=rev_num*10+remainder;
	num=num/10;
	}
	
	printf("Reverse number:%d", rev_num);
	return 0;
}
