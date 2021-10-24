//*******************************RULES***********************
// Circular bracket is not required for the sizeof if the 
// parameter is not a premitive data type
// use of %d for sizeof
// Expression which is written inside the sizeof operator is
// not evaluated there is no affect of sizeof on operations.
//*************************************************************
#include<stdio.h>

int main()
{
	printf("Size of integer is : %d\n",sizeof(int));

	printf("Size of float is : %d\n",sizeof(float));

	printf("Size of double is : %d\n",sizeof(double));

	printf("Size of character is : %d\n",sizeof(char));

	printf("Size of short integer is : %d\n",sizeof(short int));

	printf("Size of long integer is : %d\n",sizeof(long int));

	printf("Size of long double is : %d\n",sizeof(long double));

	struct demo
	{
		int i;
		float f;
        double d;
	}d1;

	// Circular bracket is not required for the sizeof if the 
	// parameter is not a premitive data type
	printf("Size of structure demo is %d\n",sizeof d1);

	union hello
	{
		double d;
		int i;
	}h1;

	printf("Size of union hello is %d\n",sizeof h1);

	// Expression which is written inside the sizeof operator is
	// not evaluated

	int i = 10;

	printf("Value of i before size of operator is %d\n",i);

	printf("Size of variable i is %d\n", sizeof(++i));

    printf("Size of variable i is %d\n", sizeof(--i));

	printf("Value of variable after sizeof operator is %d\n",i);

	return 0;
}