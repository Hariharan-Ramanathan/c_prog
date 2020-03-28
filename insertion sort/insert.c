void* insertion(int* a,int n){
	for(int i=1;i<n;i++){
		int value=a[i];
		int hole=i;
		while(hole>0 && a[hole-1]>value){
			a[hole]=a[hole-1];
			hole=hole-1;
		}
		a[hole]=value;
	}
}