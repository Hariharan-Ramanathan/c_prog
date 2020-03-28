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
	
	sort(a,n);
	
printf("\nValues after bubblesort");
for(int i=0;i<n;i++){
printf("\n %d",a[i]);
}
}