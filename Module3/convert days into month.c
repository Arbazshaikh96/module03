//CONVERT DAYS INTO MONTHS

#include<stdio.h>

int main()

{
	float month, days;
	printf("Enter days : ");
	scanf("%f",& days);
	
	month = days / 30;
	printf("Month = %.2f ", month);
	
	return 0;
}
