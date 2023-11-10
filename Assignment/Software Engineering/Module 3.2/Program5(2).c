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
    for(i = 0; i <10; i++)//loop to get 10 numbers from user
    {
        printf("Number %d = ", i+1);//to print the numbers entered by the user
        scanf("%d", &num);
        //function to find and add all even numbers entered by the user
        if(num%2==0){
        	even_num++;
        	sum_even+=num;
		}
		else{//to find and add all odd numbers entered by user
			odd_num++;
			sum_odd+=num;	
		}
	}
		
		printf("Number of even numbers:%d\n", even_num);//to print all even numbers
		printf("Number of odd numbers:%d\n", odd_num);//to print all odd numbers
		printf("Sum of even numbers:%d\n", sum_even);//to print sum of all even numbers
		printf("Sum of odd numbers:%d\n", sum_odd);//to print sum of all odd numbers
		
		return 0;
    }
    
   
    
    

