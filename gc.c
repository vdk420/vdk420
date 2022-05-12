#include<stdio.h>


int gc(int x,int y)
{
	if(y==0)
	{
		return x;
	}
//	static else if(x>y)
//	{
//		return gc(y,x);
//	}
	else
	{
		return gc(y,x%y);
	}
}
