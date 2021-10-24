// This program demonstates arithematic operations on void pointers.
// For arithematic operations on void pointers we have to use typecasting.

#include<stdio.h>

int main()
{
	int arr[]={10,20,30,40,50,60};
	void *v1 = arr;
	void *v2 = arr + 5;

	printf("v1 : \t\t%d\n",v1);
	printf("v2 : \t\t%d\n",v2);

	// Addition of pointer with integral constant
	printf("(int*)v1 + 3 : \t\t%d\n",(int*)v1 + 3);

	// Substraction of two pointers
	printf("(int*)v2 - (int*)v1 : \t\t%d\n",(int*)v2 - (int*)v1);

	// Substraction of pointer with integral constant.
	printf("(int*)v2 - 2 : \t\t%d\n",(int*)v2 - 2);
	
	// Accessing the contents using pointers
	printf("*(int*)v2 : \t\t%d\n",*(int*)v2);

	// We can not use multiplication and division operations on pointers.

	return 0;
}