#include<stdio.h>

//find if cahracter is vowel or consonant


int main()

{
	char ch;
	printf("enter any character   ");
	scanf("%c", & ch);
	
	if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
	
	{
		printf("character is vowel");
	}
	else
	{
		printf("charecter is consonant");
	}
	
	return 0;
}
