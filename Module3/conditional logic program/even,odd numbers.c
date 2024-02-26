#include<stdio.h>

int main()

{
	int number;
	printf("enter number");
	scanf("%d", & number);
	
	if(number%2==0)
	{
		printf("even number");
	}
	else if(number%2!=0)
	{
		printf("odd number");
	}
	
	return 0;
}
