#include <stdio.h>
#include <ctype.h>
int isValid(char str[])
{
	int i=0;
	if(!(isalpha(str[0]) || str[0]=='_'))
	{
		return 0;
	}
	for(i=1;str[i]!='\0';i++)
	{
		if(!(isalnum(str[i]) || str[i]=='_'))
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char str[10];
	printf("\n Enter variable name:");
	scanf("%s",str);
	if(isValid(str))
	{
		printf("\n Accepted");
	}
	else
	{
		printf("\n Rejected");
	}
	return 0;
}
