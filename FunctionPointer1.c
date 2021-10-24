// This program demonstates complicated function pointers and its use

#include<stdio.h>

int global = 10;

// fun1 is a function which accept two parameters,
// both are integer and function returns nothing.
void fun1(int i,int j)
{
	printf("\nInside fun1\n");
}

// fun2 is a function which accept two parameters,
// both are address of integers and it returns integer.
int fun2(int *p, int *q)
{
	printf("\nInside fun2\n");
	return 0;
}

// fun3 is a function which accept one parameter,
// which is address of function pointer and it returns address of integer.
int* fun3(int **p)
{
	printf("\nInside fun3\n");
	return &global;
}

// fun4 is a function which accept one parameter,
// which is a function pointer which accept two parameters as integer
// and returs nothing.
// and the whole function returs nothing.
void fun4(void (*fp)(int ,int))
{
	printf("\nInside fun4\n");
	fp(10,20);
}

// fun1 is a function which accept one parameters,
// which is base address of an array.
void fun5(int a[])
{
	printf("\nInside fun5\n");	
}

// fun1 is a function which accept one parameters,
// which is address of integer.
void fun6(int *a)
{
	printf("\nInside fun6\n");	
}

int main()
{
	int no1 = 10,no2 = 20;
	int *p = &no1;
	int arr[4] = {10,20,30};

	// Creating function pointers
	
	// void fun1(int i,int j)
		void (*fptr1)(int ,int);
		fptr1 = fun1;
		fptr1(10,20);

	// int fun2(int *p, int *q)
		int (*fptr2)(int*,int*);
		fptr2 = fun2;
		fptr2(&no1,&no2);
	  
	// int* fun3(int **p)
		int* (*fptr3)(int**);
		fptr3 = fun3;
		fptr3(&p);

	// void fun4(void (*fp)(int ,int))
		void (*fptr4)(void(*)(int,int));
		fptr4 = fun4;
		fptr4(fun1);

	// void fun5(int a[])
		void(*fptr5)(int []);
		fptr5 = fun5;
		fptr5(arr);

	// void fun6(int *a)
		void(*fptr6)(int*);
		fptr6 = fun6;
		fptr6(arr);


	return 0;
}