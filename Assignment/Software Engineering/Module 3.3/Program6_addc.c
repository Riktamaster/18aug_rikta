//WAP to make addition of two matrix using 2-D Array
#include <stdio.h>
int main() {
  int r,c,a[100][100],b[100][100],sum[100][100],i,j;
  
  // Get the number of rows and columns for the matrices from the user
  printf("Enter number of rows(1-100):");
  scanf("%d", &r);
  printf("Enter number of columns(1-100):");
  scanf("%d",&c);
  
  // Input for the first matrix
  printf("Enter elements of 1st matrix:\n");
  for (i=0;i<r;i++)
  for (j=0;j<c;j++){
  printf("Enter element a%d%d:",i+1,j+1);
  scanf("%d",&a[i][j]);}
  
  // Input for the second matrix
  printf("Enter elements of 2nd matrix:\n");
  for (i=0;i<r;i++)
  for (j=0;j<c;j++){
  printf("Enter element b%d%d:", i+1,j+1);
  scanf("%d",&b[i][j]);}
  
  //Adding two matrices
  for (i=0;i<r;i++)
  	for(j=0;j<c;j++){
  	sum[i][j]=a[i][j]+b[i][j];
  }
  
  //Printing the sum
  printf("\nThe sum of 2 matrices:\n");
  for (i=0;i<r;i++)
  	for (j=0;j<r;j++){
  	printf("%d   ", sum[i][j]);
  	if (j==c-1){
	printf("\n\n");}
  	}
  return 0;}
