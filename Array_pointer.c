// This program demonstates pointers and array

#include<stdio.h>

int main()
{	
	// One dimentional array
	int arr1[5] = {1,2,3,4,5};

	// All the below statements are same
	arr1[2];
	2[arr1];
	*(arr1 + 2);
	*(2 + arr1);

	printf("One dimentional array\n");
	printf("%d %d %d %d\n",arr1[2],2[arr1],*(arr1 + 2),*(2 + arr1));

	// Two dimentional array
	int arr2[2][3]={1,2,3,4,5,6};

	// All the below statements are same
	arr2[1][2];
	1[arr2][2];
	*(*(arr2 + 1) + 2);
	*(*(1 + arr2) + 2);
	*(2 + *(arr2 + 1));
	*(2 + *(1 + arr2));

	printf("Two dimentional array\n");
	printf("%d %d %d ",arr2[1][2],1[arr2][2],*(*(arr2 + 1) + 2));
	printf("%d %d %d\n",*(2 + *(arr2 + 1)),*(*(1 + arr2) + 2),*(2 + *(1 + arr2)));

	// Three dimentional array
	int arr3[2][3][2]={1,2,3,4,5,6,7,8,9,10,11,12};
	
	// All the below statements are same
	arr3[1][2][1];
	1[arr3][2][1];
	*(*(*(arr3 + 1) + 2) + 1);
	*(*(*(1 + arr3) + 2) + 1);
	*(*(2 + *(1 + arr3)) + 1);
	*(1 + *(2 + *(1 + arr3)));
	*(1 + *(*(1 + arr3) + 2));

	printf("Three dimentional array\n");
	printf("%d %d %d %d ",arr3[1][2][1],1[arr3][2][1],*(*(*(arr3 + 1) + 2) + 1),*(*(*(1 + arr3) + 2) + 1));
	printf("%d %d %d \n",*(*(2 + *(1 + arr3)) + 1),*(1 + *(2 + *(1 + arr3))),*(1 + *(*(1 + arr3) + 2)));

	return 0;
}
