#include<stdio.h>
int main(){
	int a=5;
	int num[5]={0,0,0,0,0};
	int n=4;
	while(a!=0){
		num[n]=a%2;
		a=a/2;
		n--;
	}
	printf("\nDecimal values are ");
	for(int i=0;i<5;i++){
		printf("%d",num[i]);
	}
}