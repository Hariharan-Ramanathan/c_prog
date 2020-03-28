#include<stdio.h>
#include<stdlib.h>
#include<math.h>

static int total_nodes;
static int ans;

void create_subsets(int* a,int size,int target);
void subsetUTIL(int* input,int* new_array,int size,int new_array_size,int sum,int start,int target);

int main(){
	int n;
	printf("Enter the Number of inputs\n");
	scanf("%d",&n);
	int* input=(int*)malloc(n*sizeof(int*));
	printf("Enter the input\n");
	for(int i=0;i<n;i++){
		scanf("%d",&input[i]);
	}
	printf("Enter the target value\n");
	int target;
	scanf("%d",&target);
	create_subsets(input,n,target);
	printf("Total number of nodes = %d \n Answer is %d subsets \n",total_nodes,ans);
	
return 0;	
}

void create_subsets(int* input,int size,int target){
	int* new_array=(int*)malloc(size*sizeof(int*));
	subsetUTIL(input,new_array,size,0,0,0,target);
	
}

void subsetUTIL(int* input,int* new_array,int size,int new_array_size,int sum,int start,int target){
	total_nodes++;
	if(sum>=target){
		for(int i=0;i<new_array_size;i++){
			printf("%*d",5,new_array[i]);
		}
		ans++;
		printf("\n");
		subsetUTIL(input,new_array,size,new_array_size-1,sum-input[start],start+1,target);
		return;
	}
	else{
		for(int i=start;i<size;i++){
			new_array[new_array_size]=input[i];
			subsetUTIL(input,new_array,size,new_array_size+1,sum+input[i],i+1,target);
		}
	}
}
























