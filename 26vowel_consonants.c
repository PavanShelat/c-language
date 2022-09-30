#include<stdio.h>
int main()
{
	
	char ch;
	
	printf("Enter alphabet:\n");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='O' || ch=='u') 
	{
		printf("vowel");
	}
	else
	{
	   printf("consonant");
	}
	
	return 0;
}