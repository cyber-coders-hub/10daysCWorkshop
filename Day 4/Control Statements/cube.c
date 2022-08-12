#include<stdio.h>

int main()
{
	int num,i;
	printf("Enter the number upto which you want to find the cube :");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\nCube of %d is %d",i,i*i*i);
	}
	return 0;
}
