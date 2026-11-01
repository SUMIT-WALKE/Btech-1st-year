#include <stdio.h>
int main()
{
	int num1, num2, num3,Sub;
	
	printf("Enter a number");
	scanf("%d",&num1);
	printf("You entered: %d",num1);
	
	printf("Enter a number");
	scanf("%d",&num2);
	printf("You entered: %d",num2);
	
	Sub = num1 - num2;
	printf("Substraction is: %d",Sub);
	
	return 0;
}