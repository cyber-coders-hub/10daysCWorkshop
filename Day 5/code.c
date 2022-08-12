#include<stdio.h>

int main()
{
	char letters[24];
	int numb[10],j; //Declaration of array
	//numb[10]={1,2,3,4,5,6,7,8,9,10}; //Assigning value to array
	
	//Accessing array elements
	numb[0]=2; //first element of array numb
	numb[1]=4; //second element of array numb
	numb[2]; //third element of array numb
	
	numb[9]=54; //last element/10th element of array numb
	
	//input array elements one by one
	scanf("%d",&numb[0]);
	scanf("%d",&numb[1]);
	scanf("%d",&numb[2]);
	scanf("%d",&numb[3]);
	scanf("%d",&numb[4]);
	scanf("%d",&numb[5]);
	scanf("%d",&numb[6]);
	scanf("%d",&numb[7]);
	scanf("%d",&numb[8]);
	scanf("%d",&numb[9]);
	
	//input array elements using loop
	for(j=0;j<10;j++)
	{
		scanf("%d\n",&numb[j]);
	}
	
	//print array elements one bye one
	printf("%d\n",numb[0]);
	printf("%d\n",numb[1]);
	printf("%d\n",numb[2]);
	printf("%d\n",numb[3]);
	printf("%d\n",numb[4]);
	printf("%d\n",numb[5]);
	printf("%d\n",numb[6]);
	printf("%d\n",numb[7]);
	printf("%d\n",numb[8]);
	printf("%d\n",numb[9]);
	
	//print array elements using loop
	for(j=0;j<10;j++)
	{
		printf("%d ",numb[j]);
	}
}
