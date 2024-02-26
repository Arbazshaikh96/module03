//COUNTRY'S NAME IN ABBREVIATED FORM

#include<stdio.h>

int main()

{
	char name1[30];
	printf("Enter country's name : ");
	scanf("%s",& name1);
	
	printf("Abbreviated form : ");
	printf("&c\n",name1[0]);
	
	
	return 0;
}
