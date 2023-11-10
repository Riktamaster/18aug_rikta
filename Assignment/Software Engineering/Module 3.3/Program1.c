//Write a program to find out the max number from given array using function

#include<stdio.h>
int main()
{
	int n,i;
	int arr[100];
	printf("Enter number of elements (1-100):");//Enter required number of elements
	scanf("%d", &n);
	
	for (i=0;i<n;i++){
		printf("Enter number %d:",i+1);// Enter numbers co-relating to number of elements entered
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i<n;i++){
		if (arr[0]<arr[i]){
			arr[0]=arr[i];
		}
	}
	printf("The largest number is:%d",arr[0]);
	
	return 0;
}
