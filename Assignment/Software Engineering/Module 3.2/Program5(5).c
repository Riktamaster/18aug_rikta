//WAP to print Fibonacci series upto given numbers

#include<stdio.h>

int main()
{
	int n, t1=0, t2=1, next_term, i;
	
	printf("Enter number of terms:");
	scanf("%d",&n );
	
	printf("Fibonacci series:%d,%d,", t1,t2);//for displaying t1 and t2
	
	for (i=3;i<=n;++i)
	{printf("%d,",next_term);
	t1=t2;
	t2=next_term;
	next_term=t1+t2;
	}
	
	return 0;
}
