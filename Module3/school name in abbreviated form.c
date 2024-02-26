//SCHOOL'S NAME IN ABBREVIATED FORM
#include<stdio.h>

int main()

{
	char fname[30],mname[30],lname[30];
	printf("Enter schools first middle and last name : ");
	scanf("%s %s %s",&fname,&mname,&lname);
	
	printf("Abbreviated name : ");
	printf("%c %c %s\n", fname[0],mname[0],lname);
	
	
	return 0;
}
