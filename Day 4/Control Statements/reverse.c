#include <stdio.h>

int main(){
    int num,r,sum=0,t;

    printf("Input a number: ");
    scanf("%d",&num);

    for(t=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum*10+r;
    }

	/*
    while(num!=0)
    {
    	r=num % 10;
    	sum=sum*10+r;
    	num = num/10;
	}
	*/
	
	printf("The number in reverse order is : %d \n",sum);
	return 0;
}
