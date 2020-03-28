int main(){
	int n;
	printf("\nEnter the number of terms");
	scanf("%d",&n);
	printf("\nEnter the %d numbers\n",n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	insertion(a,n);
	printf("After insertion_sort\n");
	for(int i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}
