//Accept to integers and check weather they are equal or not 
#include<stdio.h>

int main()

{
	int int1, int2;
	printf("Enter the values for number1 and number2 : ");
	scanf("%d %d",int1, int2);
	
	if(int1==int2)
	{
		printf("number1 and number2 is equal");
	}
	else{
		printf("\nNumbers are not equal");
	}
}
