#include<stdio.h>
#include<stdlib.h>
long long fibonacci(int n,int* arr){
	if(arr[n]!=NULL)
		return arr[n];
	if(n==1||n==2)
		return 1;
	else
		arr[n]=fibonacci((n-1),arr)+fibonacci((n-2),arr);
return arr[n];
}
int main(){
int n;
printf("Enter the nth fibnacci number\n ");
scanf("%d",&n);
int* arr=malloc(n*sizeof(int*));
long long ans=fibonacci(n,arr);
printf("%dth fibonacci number is %lld\n",n,ans);
}
