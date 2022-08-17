#include<stdio.h>

void swap(int *a, int *b);

int main()
{
	int num1 = 5, num2 = 10;
	swap(&num1,&num2);
	printf("After swap : num1 = %d and num2 = %d",num1,num2);
	return 0;
}

void swap(int *a , int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
