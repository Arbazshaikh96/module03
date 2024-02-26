//convert years into days and months

#include<stdio.h>

int main()

{
	int y, m, d;
	printf("Enter year : ");
	scanf("%d", & y);
	
	m = 12 * y;
	d = y * 365;
	
	printf("Month %d days %d",m,d);
	
	
	return 0;
}
