//WAP to print table up to given number

void printTable(int n);

int main()

{
int n;
printf("Enter number:");
scanf("%d", &n);

printTable(n);
return 0;
}

void printTable(int n){
	int i;
	for (i=1;i<=10;i++)
	{
	printf("%d\n",i*n );	
}
}
