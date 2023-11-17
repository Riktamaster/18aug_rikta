//WAP to make multiplication of two matrix using 2-D Array
#include <stdio.h>
int main() {
  int r,c,a[100][100],b[100][100],mul[100][100],i,j,k;
  
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
  
  //Multiplying two matrices
  for (i=0;i<r;i++)
  	for(j=0;j<c;j++){
  	mul[i][j]=0;
  	for (k=0;k<c;k++){
  		mul[i][j]+=a[i][k]*b[k][j];
	  }
  }
  
  //Printing the product
  printf("\nThe multiplication of 2 matrices:\n");
  for (i=0;i<r;i++)
  	for (j=0;j<r;j++){
  	printf("%d   ", mul[i][j]);
  	if (j==c-1){
	printf("\n\n");}
  	}
  return 0;}
