#include<stdio.h>

int add(int a,int b); //Function Prototype or Function Declaration

void main()
{
	int firstNum, secondNum,result;
	printf("Enter first number : ");
	scanf("%d",&firstNum);
	printf("\nEnter second number : ");
	scanf("%d",&secondNum);
	result = add(firstNum,secondNum); // Function Call
	
	printf("The sum of %d and %d is %d",firstNum,secondNum,result);
}

//function definition
int add(int a,int b)
{
	int c;
	c = a + b;
	return c;
}


