//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>

int main()
{
	int num, remainder, rev_num;
	printf("Enter number:");
	scanf("%d", &num);
	
	while (num!=0)
	{remainder=num%10;
	rev_num=rev_num*10+remainder;
	num=num/10;
	}
	
	printf("Reverse number:%d", rev_num);
	return 0;
}
