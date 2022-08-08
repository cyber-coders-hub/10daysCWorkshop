#include <stdio.h>
#define e 'f'

int main()
{

    const float pi = 3.1416;
    int xyz = 19;
    printf("%d\n", xyz);
    xyz = 34;
    float salary = 25000.84515;
    char abc = 'a';
    int a = 5, b = 10, c, d;

    printf("%d\n", xyz);
    printf("%f\n", salary);
    printf("\n%c", abc);
    printf("\nHello\tWorld");
    printf("\n%d", pi);
    printf("\n%c", e);

    // Single line comment

    /* This is
    multi line comment
    */

    // Arithmetic Operators
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", b / a);
    printf("%d\n", b % a);

    // Increment and Decrement Operators
    c = ++a;
    d = --b;
    printf("%d\n", c);
    printf("%d\n", d);

    return 0;
}