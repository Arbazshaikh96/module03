//electricity bill 
#include<stdio.h>

int main()

{
	int unit;
	float total;
	printf("enter your electricity unit: ");
	scanf("%d", & unit);
	
	if(unit <=350)
	{
		total = unit*1.20;
		printf("your total bill is : %f", total);
	
	}
	else if(unit >350 && unit <=600)
	{
		total = (350*1.20) + ((unit-350)*1.50);
		printf("your total bill is : %f", total);	
	}
	else if(unit >600 && unit <=800)
	{
		total = (350*1.20) + (600*1.80);
		printf("your total bill is : %f", total);	
	}
	else if(unit >800)
	{
		total = (800*2.00);
		printf("your total bill is : %f", total);	
	}
	return 0;
}
