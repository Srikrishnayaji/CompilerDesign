#include<stdio.h>
void main()
{
    int a, b, c, n = 10;
    char dd;
    a = 0;
    b = 1;
    c = a+b;
    do
    {
        a = b;
        b = c;
        c = a+b;
        n--;
    } while (n>0);
    printf("Nth Fibonacci number is %d", c);
}
