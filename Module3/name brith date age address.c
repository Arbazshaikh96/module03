//write your name, brith date, age, address

#include<stdio.h>

int main()

{
	int a, b, c;
	char first_name[10];
	char last_name[10];
	int age;
	char address[100];
	printf("enter the day: ");
	scanf("%d",& a);
	printf("enter the month: ");
	scanf("%d",& b);
	printf("enter the year: ");
	scanf("%d", & c);
	printf("your DOB is : %d %d %d",a,b,c);
	
	printf("\nenter your first_name:");
	scanf("%s",& first_name);
	printf("enter your last_name:");
	scanf("%s",& last_name);
	printf("your full name is : %s %s",first_name,last_name);
	
	printf("\nenter your age : ");
	scanf("%d",& age);
	printf("your age is :%d ",age);
	
	printf("\nenter your address : ");
	scanf("%s",& address);
	printf("your address is : %s",address);
	
	return 0;
}
