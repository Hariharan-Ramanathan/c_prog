#include<stdio.h>
int main(){
int a=10;
int b=20;

int* ptr=&a;
printf("ans is %d",ptr);
printf("\nnext is %d",*ptr);
printf("\nnext is %d",&a);

}