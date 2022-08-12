#include<stdio.h>

int main()
{
	/*
	int a[2][2] = {{1,2},{3,4}}; // Declaration and initialization State of 2d array
	int b[2][2][3] = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}}; //Declaration and initialization of 3d array
	*/
	
	int c[2][3],i,j,k;
	int d[2][2][2];
	
	//Input 2d array elements one by one
	/*
	scanf("%d",&c[0][0]);
	scanf("%d",&c[0][1]);
	scanf("%d",&c[0][2]);
	scanf("%d",&c[1][0]);
	scanf("%d",&c[1][1]);
	scanf("%d",&c[1][2]);
	*/
	
	//Input 2d array elements using loop
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	
	//Print 2d array elements using loop
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	//Input 3d array elements 
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				scanf("%d",&d[i][j][k]);
			}
		}
	}
	
	//Print 3d array elements
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d ",d[i][j][k]);
			}
		}
	}
	
	
	
	return 0;
	
	
	
}

