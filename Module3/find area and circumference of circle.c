//WAP FIND AREA AND CIRCUMFRERENCES OF CIRCLE

#include<stdio.h>
int main()

{
	float r,c,a;
	printf("Enter radius: ");
	scanf("%f",& r);
	
	float pi=3.14;
	
	c=2*pi*r;
	a=pi*r*r;
	
	printf("\ncircumference of circle: %f", c);
	printf("\nArea of a circle: %f", a);
	
	
    return 0;  
}

