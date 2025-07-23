#include<stdio.h>
void swap(int *, int *);
int main(void){
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("Before swapping n1=%d and n2=%d\n",n1,n2);
    swap(&n1,&n2);
    printf("After swapping n1=%d and n2=%d",n1,n2);
}
void swap(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
