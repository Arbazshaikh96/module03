//AREA OF A TRIANGLE 

#include<stdio.h>

int main()

{
	int l,b,h,area;
	printf("Enter Number :");
	scanf("%d %d %d",&l, &b, &h);
	
	area=l*b*h;
	printf("area of triangle is : %d",area);
	
	return 0;
}
