#include <stdio.h>
// Function to add 10 to b
int functionn(/*@unique@*/ /*@null@*/int* ptr1, /*@unique@*/ /*@null@*/int* ptr2)
{
	*ptr1 =10;
	*ptr2= 11;
	 return *ptr1;
}

// Driver Code
int main()
{
	int data1= 10, data2 = 20;
	// Function Call with aliasing
	int result = functionn(&data1, &data1);
	printf("Checking dangerous aliasing");
	return 0;
}




