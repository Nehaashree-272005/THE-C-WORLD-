# THE-C-WORLD-
BASIC AND SIMPLE CODES IN C LANGUAGE TO IMPROVE YOUR KNOWLEDGE 
C program to swap two values using temporary variable 
#include<stdio.h>
void main()
{
int num1,num2,temp;
printf("Enter value of num1 :");
scanf("%d",&num1);
printf("Enter value of num2 :");
scanf("%d",&num2);
printf("Before swapping:\n num1=%d,num2=%d\n",num1,num2);
temp=num1;
num1=num2;
num2=temp;
printf("After swapping:\n num1=%d,num2=%d",num1,num2);
}
Output:
Enter value of num1 :8
Enter value of num2 :9
Before swapping:
 num1=8,num2=9
After swapping:
 num1=9,num2=8
