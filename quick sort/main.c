int main(){
	int n;
	printf("\nEnter the number of terms\n");
	scanf("%d",&n);
	printf("\nEnter the %d numbers\n",n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("After quick_sort\n");
	for(int i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}
