#include<stdio.h>
int sum(int, int);
int main(void){
    int total;
    total=sum(10,14);
    printf("The total is %d ",total);
}
int sum(int a,int b){
    return a+b;
}
