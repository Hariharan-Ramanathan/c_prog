int partition(int* a,int start,int end){
	int pivot=a[end];
	int index=start;
		for(int i=start;i<end;i++){
			if(a[i]<=pivot){
				swap(&a[i],&a[index]);
				index++;
			}
		}
		swap(&a[index],&a[end]);
		return index;
}