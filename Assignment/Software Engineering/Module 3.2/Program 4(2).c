//WAP to show vowel or consonant using switch case

#include<stdio.h>
char main()

{
	char alphabet;
	printf("Enter alphabet:");
	scanf("%c", &alphabet);
	
	
	switch (alphabet)
	
	{
	case 'a':printf("Alphabet is a vowel");
	break;
	case 'A':printf("Alphabet is a vowel");
	break;
	case 'e':printf("Alphabet is a vowel");
	break;
	case 'E':printf("Alphabet is a vowel");
	break;
	case 'i':printf("Alphabet is a vowel");
	break;
	case 'I':printf("Alphabet is a vowel");
	break;
	case 'o':printf("Alphabet is a vowel");
	break;
	case 'O':printf("Alphabet is a vowel");
	break;
	case 'u':printf("Alphabet is a vowel");
	break;
	case 'U':printf("Alphabet is a vowel");
	break;
	default :printf("Alphabet is a consonant");
}
	
	return 0;
	
}
