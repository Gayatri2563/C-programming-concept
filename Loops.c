// This program demonstates loops used in C 

#include<stdio.h>

int main()
{

	/*
	Syntax of for loop :

	for ( variable initialization; condition; variable update ) 
	{
		Code to execute while the condition is true
	}
	*/

	printf("First for loop\n");
	int i;
	for(i = 0; i < 10; i++)
	{
		printf(" %d ",i);
	}

	printf("\nSecond for loop\n");
	i = 0;
	for( ; i < 10; i++)
	{
		printf(" %d ",i);
	}

	printf("\nThird for loop\n");
	i = 0;
	for( ; i < 10; )
	{
		i++;
		printf(" %d ",i);
	}

	printf("\nFourth for loop\n");
	i = 0;
	for( ; ; )
	{
		i++;
		if(i<10)
		{
			printf(" %d ",i);
		}
		else
		{
			break;
		}
	}

	/*
	Syntax of while loop :

	while ( condition ) 
	{ 
		Code to execute while the condition is true 
	} 
	*/

	printf("\nFirst while loop\n");

	i = 0;
	while(i!=10)
	{
		printf(" %d ",i);
		i++;
	}

	/*
	Syntax of do while loop :

	do 
	{
		Code to execute while the condition is true
	} while ( condition );
	*/

	printf("\nFirst do while loop\n");

	i = 0;
	do
	{
		printf(" %d ",i);
		i++;
	}while(i!=10);

	printf("\nSecond do while loop\n");

	// do While loop is executed at least once because condition is tested after
	// first iterarion
	i = 10;
	do
	{
		printf(" %d ",i);
	}while(i!=10);

	// Thise while loop is not executed once
	while(i!=10)
	{
		printf(" %d ",i);
	}

	return 0;
}