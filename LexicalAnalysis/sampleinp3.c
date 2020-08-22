#include<stdio.h>

//Program to find sum of elements of array

int main(){
    int a[10];
    for(int i = 0; i < 10; ++i){
        a[i] = i+1;
    }
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += a[i];
    }
    printf("%d", sum);
    return(0);
}