//Convert minutes into seconds and hours
#include<stdio.h>

int main()

{
	int m, s, h;
	printf("Enter minutes : ");
	scanf("%d",& m);
	
	s = m * 60;
	h = m / 60;
	
	printf("seconds %d hour %d", s, h);
	
	
	return 0;
}
