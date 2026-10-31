#include <stdio.h>
int main()
{
	int num1, num2, sum;
	printf("Enter a number");
	scanf("%d",&num1);
	printf("You entered: %d",num1);
	
	printf("Enter a number");
	scanf("%d",&num2);
	printf("You entered: %d",num2);
	
	sum= num1 + num2;
	printf("Sum of two numbers is:%d",sum);
	
	return 0;
}