#include<stdio.h>
int main(){
	char a[4][10];
	printf("Enter the input");
	for(int i=0;i<4;i++){
		printf("%d",i+i);
	}
	printf("\nOutput is\n");
	for(int i=0;i<4;i++){
		printf("%s",a[i]*4);
		printf("\n");
	}
}
