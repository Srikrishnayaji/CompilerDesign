#include<stdio.h>

int sum(int a, int b) {
    a += b;
    return a;
}

int main() {
   int a = 5, b = 6;
   a++;
   for(a = 2; a != 3; a++) {
       b = a + 9;
   }
   sum(a, 5-8);
   
   b += a + 78;
}

