#include<stdio.h>

//dynamic calculator

int main()

{
	int n1, n2;
	char choice;
	printf("enter + for addition \n enter - for substriction \n enter * for multiplication \n enter / for division \n enter modulo for modulo");
	printf("enter number1");
	scanf("%d", & n1);
	printf("enter you operator");
	scanf(" %c", & choice);
	printf("enter number2");
	scanf("%d", & n2);
	
	switch(choice)
	
	{
		case '+':
			printf("addition for %d and %d is %d", n1,n2,n1+n2);
			break;
		case '-':
			printf("substriction for %d and %d is %d", n1, n2, n1-n2);
			break;
		case '*':
			printf("multiplication for %d and %d is %d", n1, n2, n1*n2);
			break;
		case '/':
			if(n2==0)
			{
				printf("cant divide by zero");
			}else
			{
				printf("division for %d and %d is %d", n1, n2, n1/n2);
			}
			break;
		case '%':
			printf("modulo for %d and %d is %d", n1, n2, n1%n2);
			
			
	}
	return 0;
}

