#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("The given number is even",n);
	}
	else
	{
		printf("The given number is not even");
	}
	return 0;
}
