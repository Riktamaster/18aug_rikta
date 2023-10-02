//WAP to take 10 no. input from user and find out.....
//a) How many even numbers are there
//b) How many odd numbers are there
//c) Sum of even numbers
//d) Sum of odd numbers

#include <stdio.h>

int main()
{   
    int i,num, even_num=0,odd_num=0,sum_even=0,sum_odd=0;
    printf("Enter the 10 Numbers\n");
    for(i = 0; i <10; i++)
    {
        printf("Number %d = ", i+1);
        scanf("%d", &num);
        
        if(num%2==0){
        	even_num++;
        	sum_even+=num;
		}
		else{
			odd_num++;
			sum_odd+=num;	
		}
	}
		
		printf("Number of even numbers:%d\n", even_num);
		printf("Number of odd numbers:%d\n", odd_num);
		printf("Sum of even numbers:%d\n", sum_even);
		printf("Sum of odd numbers:%d\n", sum_odd);
		
		return 0;
    }
    
   
    
    

