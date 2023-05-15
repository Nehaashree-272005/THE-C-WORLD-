# THE-C-WORLD-
BASIC AND SIMPLE CODES IN C LANGUAGE TO IMPROVE YOUR KNOWLEDGE
C program to check whether a number is even or odd without using modulus operator.
#include<stdio.h>
int main()
{
    int number,check;
    printf("Enter a number:");
    scanf("%d",&number);
    check = (number/2)*2;
    if(check==number)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd\n");
    }
    return 0;
}
Output 
Enter a number:4
The number is even
