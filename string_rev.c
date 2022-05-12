#include<stdio.h>

void st(char *str,int i)
{
	if(i>=0)
	{
		printf("%c",str[i]);
		st(str,i-1);
	}
	return;
}
