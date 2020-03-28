#include<stdio.h>
int* sort(int *a,int n){
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(a[i]>a[j]){
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	}
}
return a;
}

int main(){
int n;
printf("Enter the number of digits\n");
scanf("%d",&n);
printf("Enter the %d values\n",n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Values before bubblesort");
	for(int i=0;i<n;i++){
	printf("\n%d",a[i]);
	}
	
int* k=sort(a,n);
	
printf("\nValues after bubblesort");
for(int i=0;i<n;i++){
printf("\n %d",*(k+i));
}

return 0;
}
