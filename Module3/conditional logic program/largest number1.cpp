#include<stdio.h>

// find largest among three numbers
// find smallest among three numbers
//take value from user and find it alpha,digit or symbol
//swap without third var.


int main()

{
	int n1, n2, n3;
	printf("enter first number");
	scanf("%d", & n1);
	
	printf("enter second number");
	scanf("%d", & n2);
	
	printf("enter third number");
	scanf("%d", & n3);
	
	if(n1>n2)
	
	{
		printf("%d is largest number", n1);
	}
	else if(n2>n3)
	
	{
		printf("%d is largest number", n2);
	}
	else
	{
		printf("%d is largest number", n3);
	}
	
	return 0;
}
