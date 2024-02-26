//table up to given numbers
#include<stdio.h>

int main()

{
	int num;
	printf("Enter the number you want to multiply");
	scanf("%d", &num);
	
	printf("the multiplication of %d is\n ", num);
	
	for(int i=0; i<10; i++)
	{
		 
		printf("%d * %d = %d\n",num,i+1, (i+1)*num);
	}
	
	return 0;
}
