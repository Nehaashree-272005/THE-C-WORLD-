# THE-C-WORLD-
BASIC AND SIMPLE CODES IN C LANGUAGE TO IMPROVE YOUR KNOWLEDGE 
C program to swap two numbers without using arithmetic operator
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of a:");
    scanf("%d",&a);
    printf("Enter the values of b:");
    scanf("%d",&b);
    a=a^b;//010^100=110 Binary value of 2 = 010 ,4 = 100
    b=a^b;//110^100=010
    a=a^b;//110^010=100
    printf("The value of a %d\n",a);
    printf("The value of b %d",b);
}
Output
Enter the values of a:2
Enter the values of b:4
The value of a 4
The value of b 2
