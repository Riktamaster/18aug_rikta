//WAP to print table up to given number

void printTable(int n);

int main()

{
int n;
//to get number from the user
printf("Enter number:");
scanf("%d", &n);

printTable(n);//user defiend function to print table
return 0;
}

void printTable(int n){
	int i;
	for (i=1;i<=10;i++)//loop to print table of the number given by the user
	{
	printf("%d\n",i*n );	
}
}
