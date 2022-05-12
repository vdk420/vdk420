#include<stdio.h>


int fact(int b)
{
	if(b==0)
	{
		return 1;
	}
	else
	{
		return b*fact(b-1);
	}
	return b;
}
