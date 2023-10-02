//Write a program to find out the max from given number (E.g., No: -1562 --> Max number is 6)

#include <stdio.h>
int main() 
{
    int num, max, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;

        if (digit > max) {
            max = digit;
        }
        num = num / 10;
    }
    printf("Max number is %d\n", max);
    return 0;
}
