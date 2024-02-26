//Accept marks from user and check pass or fail
#include<stdio.h>

int main()

{
	int number;
	printf("enter your marks : ");
	scanf("%d",& number);
	
	if(number>=35 && number<=100)
	{
		printf("you are passed");
	}
	if(number<35)
	{
		printf("you are failed");
	}
	
	return 0;
}
