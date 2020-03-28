void mergesort(int *a,int left,int mid,int right){
	int i=0;
	int j=0;
	int k=left;
	int n1=mid-left+1;
	int n2=right-mid;
		int l[n1];
		int r[n2];
		for(int i=0;i<n1;i++){
			l[i]=a[left+i];
		}
		for(int j=0;j<n2;j++){
			r[j]=a[mid+j+1];
		}
		while(i<n1 && j<n2){
		if(l[i]<=r[j]){
			a[k]=l[i];
			i=i+1;
			k=k+1;
		}else{
			a[k]=r[j];
			j=j+1;
			k=k+1;
		}
	}
	while(i<n1){
		a[k]=l[i];
		i=i+1;
		k=k+1;
	}
	while(j<n2){
		a[k]=r[j];
		k=k+1;
		j=j+1;
	}
}