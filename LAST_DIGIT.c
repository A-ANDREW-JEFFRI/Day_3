#include<stdio.h>
int main()
{
	int number,last_digit;
	printf("Enter the number: ");
	scanf("%d",&number);
	last_digit=number%10;
	printf("the last digit of the number %d is %d", number,last_digit);
	
}
