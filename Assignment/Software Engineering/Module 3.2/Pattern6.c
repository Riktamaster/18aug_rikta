/*WAP to print-->         *
                         ***
						*****
					   *******
					  *********     */ 

#include<stdio.h>

int main()

{
	int i,j;
	
	for(i=1;i<=5;i++) //loop to print rows 
   {  
       for(j=4;j>=i;j--) //inner loop to print columns
       {  
           printf(" "); //to print space 
       }  
       for(j=1;j<=2*i-1;j++) //nested loop to print '*' 
       {  
         printf("*");  
       }    
     
      printf("\n");  
    }  
    return 0;  
}  
