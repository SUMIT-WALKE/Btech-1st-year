#include <stdio.h>
int main()
{
	int num1, num2;
	float div;
	
	printf("Enter a number");
	scanf("%d",&num1);
	printf("You entered: %d",num1);
	
	printf("Enter a number");
	scanf("%d",&num2);
	printf("You entered: %d",num2);
	
	div = num1 / num2;
	printf("Division: %f",div);
	
	return 0;
}