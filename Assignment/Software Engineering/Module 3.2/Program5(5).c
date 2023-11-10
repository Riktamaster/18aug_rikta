//WAP to print Fibonacci series upto given numbers

#include<stdio.h>

int main()
{
	int n, t1=0, t2=1, next_term, i;
	//to get number of terms from user
	printf("Enter number of terms:");
	scanf("%d",&n );
	
	printf("Fibonacci series:%d,%d,", t1,t2);//for displaying t1 and t2
	
	for (i=3;i<=n;++i)//loop to display the fibonacci series with refernce to number os terms given by the user
	{printf("%d,",next_term);
	t1=t2;
	t2=next_term;
	next_term=t1+t2;
	}
	
	return 0;
}
