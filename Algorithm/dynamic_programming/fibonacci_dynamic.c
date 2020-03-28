#include<stdio.h>
int fibonacci(int n){
if(n<=1)
	return n;
return (fibonacci(n-1)+fibonacci(n-2));
}
int main(){
int n;
printf("Enter the nth fibnacci number\n ");
scanf("%d",&n);
int ans=fibonacci(n);
printf("%dth fibonacci number is %d\n",n,ans);
}
