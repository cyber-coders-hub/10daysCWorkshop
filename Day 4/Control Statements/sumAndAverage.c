#include<stdio.h>


int main()
{
	int num,i,sum=0;
	float avg;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num);
		sum = sum + num;
	}
	avg = sum/10;
	printf("The sum of first 10 natural numbers is %d",sum);
	printf("\nThe average of first 10 natural numbers is %f",avg);
	return 0;
}
