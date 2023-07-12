#include<stdio.h>
int main()
{
	int n1,n2,first_last_digit,second_last_digit,sum;
	printf("Enter the first number: ");
	scanf("%d",&n1);
    first_last_digit = n1%10;
    printf("The first last digit is %d",first_last_digit);
	printf("Enter the second number: ");
	scanf("%d",&n2);
	second_last_digit = n2%10;
	printf("The second last digit is %d",second_last_digit);
	sum=first_last_digit+second_last_digit;
	printf("The sum of last digit of two numbers is %d",sum);
}
