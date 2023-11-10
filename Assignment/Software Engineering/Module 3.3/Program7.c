//WAP to find out the length of string without using in built function
#include<stdio.h>

int main()
{ char s[100];
  int i;

printf("Enter a string:");//user enters the string
scanf("%s",s);

for (i=0;s[i]!='\0';++i);//loop to traverse over the string until it finds a null character 
	printf("Length of the string is:%d\n", i);//print the length of the string

	return 0;
}
