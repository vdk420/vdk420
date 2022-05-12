#include<stdio.h>


#include "header.h"


//int gc(int,int);
//void st(char*,int);
//int fact(int);

void main()
{
	char str[100],i;

        printf("enter the string\n");
        gets(str);

        printf("\nthe given string is\n");
        for(i=0 ; str[i] !='\0' ;i++)
        {
                printf("%c",str[i]);
        }

        printf("\nthe reverse of the string is\n");

        st(str,i);
        puts("\n");


	int num1,num2,temp,gcd,lcm;

	printf("enter the two numbers to find gcd and lcm");
	scanf("%d%d",&num1,&num2);

	if(num1>num2)
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}

	gcd=gc(num1,num2);

	lcm=(num1*num2)/gcd;

	printf("%d is the gcd and, %d is the lcm of two numbers\n\n",gcd,lcm);


/*	char str[100],i;

	printf("enter the string\n");
	gets(str);

	printf("\n the given string is\n");
	for(i=0 ; str[i] !='\0' ;i++)
	{
		printf("%c",str[i]);
	}

	printf("\nthe reverse of the string is\n");

	st(str,i);
	puts("\n");
*/

	int a,s;

	printf("enter the number to find factorial\n");
	scanf("%d",&a);

	s=fact(a);

	printf("\n%d",s);
}
