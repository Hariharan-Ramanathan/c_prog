int main(){
	int n;
	printf("Enter the number of terms\n");
	scanf("%d",&n);
	printf("Enter the %d terms\n",n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	merge(a,0,n-1);
	printf("After sorting\n");
	for(int i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}