#include<stdio.h>

int main()
{
	int a[4];
	int i;
	
	for(i=0;i<4;i++)
	{
		printf("\nThe address of a[%d] is %d",i,&a[i]);
	}
	
	printf("\nThe address of a is %d",a);
	printf("\nThe address of a is %d",a+1);
	
	
	return 0;
}
