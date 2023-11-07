/*
Size of Data Types in C
The size of the data types in C is dependent on the size of the architecture,
so we cannot define the universal size of the data types. 
For that, the C language provides the sizeof() operator to check the size of the data types.
*/

// C Program to print size of
// different data type in C
#include <stdio.h>

int main()
{
	int size_of_int = sizeof(int);
	int size_of_char = sizeof(char);
	int size_of_float = sizeof(float);
	int size_of_double = sizeof(double);

	printf("The size of int data type : %d\n", size_of_int);
	printf("The size of char data type : %d\n",
		size_of_char);
	printf("The size of float data type : %d\n",
		size_of_float);
	printf("The size of double data type : %d",
		size_of_double);

	return 0;
}
