void merge(int* a,int l,int r){
	if(l<r){
		int mid=(l+r)/2;
			merge(a,l,mid);
			merge(a,mid+1,r);
			mergesort(a,l,mid,r);
	}
}