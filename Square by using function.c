#include<stdio.h>
int sq(int);
int main(void){
    int total;
    total=sq(10);
    printf("The total is %d ",total);
}
int sq(int a){
    return a*a;
}
