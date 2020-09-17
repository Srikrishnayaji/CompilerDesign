#include<stdio.h>
void main()
{
    int a, b, c, n = 10;
    a = 0;
    b = 1;
    c = a+b;
    scanf("%d", &n);
    do
    {
        a = b;
        b = c;
        c = a+b;
        n--;
    } while (n>0)
    printf("Nth Fibonacci number is %d", c);
}
}
