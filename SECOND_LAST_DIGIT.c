#include<stdio.h>
int main()
{
	int N;
	int second_last_digit=(N%10)%10;
	printf("Enter the number: ");
	scanf("%d",&N);
	printf("The second last digit %d = %d",N,second_last_digit);
}
