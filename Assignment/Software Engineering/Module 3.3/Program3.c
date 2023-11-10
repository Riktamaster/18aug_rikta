//WAP to find reverse of string using recursion

#include<stdio.h>

void revsen();//Declaration of udf
int main()
{
	printf("Enter sentence:");
	revsen();//call udf
	return 0;
}

void revsen()//body of udf to reverse string
{char c;
scanf("%c",&c);
if (c!='\n'){
	revsen();
	printf("%c",c);
}
}

