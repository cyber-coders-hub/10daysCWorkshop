#include<stdio.h>

int add(int a); // function prototype

int main()
{
	int num,result;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	result = add(num); //function call
	printf("The sum of natural number is : %d",result);
}

//funtion definition
int add(int a)
{
	if(a!=0)
	{
		return a + add(a-1);
	}
	else{
		return a;
	}
}
