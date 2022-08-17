#include<stdio.h>


int main()
{
	int a; // Declaration of variable
	int *ptr; // Declaration of integer pointer
	a = 1544;
	ptr = &a; //Assigning address to pointer
	
	//a = 12;
	*ptr = 12; // Changing value pointed by pointer ptr
	
	printf("The value of a is %d",a);
	printf("\nThe value of ptr pointer is %d",*ptr); //ptr = address of a 
	
	
	
	return 0;
}
