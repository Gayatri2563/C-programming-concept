/*
		THIS PROGRAM ILLUSTRATES ABOUT :
			the concept of function pointer...
*/
#include<stdio.h>

int fun(int x, int y)
{
	printf("\nInside function fun which accept two integers and return integer");
}

int gun(int x)
{
	printf("\nInside function gun which accept two integers and return integer");
}

int main()
{
// 	Creating function pointer for function fun
// 	funptr is a pointer to function which accept two integers and both are integers and returns integer...

	int (*funptr)(int,int);

// 	Assigning address of function to the function pointer
	funptr = fun;

// 	Calling the function using function pointer
	funptr(10,20);
    

// 	Reassigning address of function gun() to same pointer
	funptr = gun;
	funptr(10,20);

	return 0;
}