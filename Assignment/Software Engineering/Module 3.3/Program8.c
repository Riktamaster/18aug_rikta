//WAP to reverse a string and check whether string is palindrome or not
#include <stdio.h>
#include <string.h>
  
int main() {
   char inputstr[100], reversedstr[100];
 
   printf("Enter the string:");
   scanf("%s", inputstr);
    
   strcpy(reversedstr, inputstr);//copy input string and reverse it
    
   strrev(reversedstr); //reverse string
   printf("Reversed string is %s\n", reversedstr);//print reversed string
    
   if(strcmp(inputstr,reversedstr)==0) //compare reversed string and input string
      printf("%s is a palindrome.\n", inputstr);
   else
      printf("%s is not a palindrome.\n", inputstr);
       
   return 0;
}
