//circumference of rectangle

#include<stdio.h>

int main()

{
	int height,width;
	
	
	printf("Enter height : ");
	scanf("%d", & height);
	
	printf("Enter width : ");
	scanf("%d",& width);
	
	printf("Area of rectangle : %d",height*width);
	printf("\nCircleference of rectangle : %d",2*(height+width));
	
	
	return 0;
}
