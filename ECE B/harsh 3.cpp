#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter a message :",str);
	scanf("%[^\n]s",str);
	printf("%s",str);
	return 0;
}