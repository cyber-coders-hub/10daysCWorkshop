#include<stdio.h>

int main()
{
	int a = 5 , b = 4;
	
	// Assignment Operators
	
	printf("%d\n",a+=2); // a = a + 2
	printf("%d\n",a-=3); // a = a - 3
	printf("%d\n",a*=2); // a = a * 2
	printf("%d\n",a/=2); // a = a / 2
	printf("%d\n",a%=2); // a = a % 2
	
	
	//Relational Operators
	
	printf("%d\n",a==b);
	printf("%d\n",a>b);
	printf("%d\n",a<b);
	printf("%d\n",a!=b);
	printf("%d\n",a>=b);
	printf("%d\n",a<=b);
	
	
	//Logical Operators

	printf("%d\n",a<b && b<a);
	printf("%d\n",a<b || b<a);
	printf("%d\n",!(a<b));



	//Bitwise Operators

	printf("%d\n",5&6);
	printf("%d\n",5|6);
	printf("%d\n",5^6);
	printf("%d\n",5<<1);
	printf("%d\n",5<<2);
	printf("%d\n",5>>1);
	printf("%d\n",5>>2);
	
	
	//Ternary Operators
	
    printf("%s\n", a<b ? "Hello"  : "Bye");
    
    

	//Operator Precedence
	
    printf("%d",a+b*2);
	
	return 0;
}
