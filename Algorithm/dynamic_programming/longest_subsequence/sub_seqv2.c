#include<stdio.h>
#include<stdlib.h>

static int large_count;

void long_sub_seq(int* ary,int n,int count,int allow,int large,int check,int num){
if(num<=n){
	if(allow!=0){
		if(check>large){
			large=check;
			count++;
				}
			}
	if(count>large_count){
		large_count=count;
	}
	long_sub_seq(seq->next[0],ary,n,count,0,large,ary[num],num+1);
	long_sub_seq(seq->next[1],ary,n,count,1,large,ary[num],num+1);
}
}
int main(){
	int n;
	printf("Enter the number of terms\n");
	scanf("%d",&n);
	int ary[n];
	printf("Enter the sequence\n");
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	node* seq=create_node(0,2);
	long_sub_seq(ary,n,0,1,0,0,0);
	printf("Ans=%d\n",large_count);

}
