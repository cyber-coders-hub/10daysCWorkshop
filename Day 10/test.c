#include<stdio.h>

void swap(int a , int b);

int main()
{
	int num1 = 5, num2 = 10;
	swap(num1,num2);
	printf("\nThe value of num1 is %d",num1);
	printf("\nThe value of num2 is %d",num2);
}


void swap(int a , int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	printf("\nThe value of num1 is %d",a);
	printf("\nThe value of num2 is %d",b);
}
