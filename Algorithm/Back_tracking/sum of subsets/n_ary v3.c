#include<stdio.h>
#include<stdlib.h>
typedef struct node node;

struct node{
	int data;
	node** next;
};

node* new_node(int data,int n){
	node* temp=(node*)malloc(sizeof(node));
	temp->next =(node**)malloc(n*sizeof(node));
	temp->data=data;
	for(int i=0;i<n;i++){
		temp->next[i]=NULL;
	}
	return temp;
}

void pre_order_traversal(node* temp,int n){
if(temp!=NULL){
		printf("%d",temp->data);
		//printf("\n");
		for(int i=0;i<n;i++){
		pre_order_traversal(temp->next[i],n);
		}
	}		
}

void create_tree(int* arr,node* tree, int m, int n, int h){
	if(h<m)	{ 
			for(int i=0;i<n;i++){
				tree->next[i]=new_node(i*arr[i++],n);
				create_tree(arr,tree->next[i],m,n,h+1);
			}
	}
}

int main(){
				int m ;
				int n = 2;
				printf("Enter the number of elements\n");
				scanf("%d",&m);
				printf("Enter the values\n");
				int* arr=malloc(m*sizeof(int*));
				for(int i=0;i<m;i++){
					scanf("%d",&arr[i]);
				}
				node* n_queen = new_node(arr[0],n);
				create_tree(arr,n_queen,m,n,0);
				printf("Pre_order_traversal\n");
				pre_order_traversal(n_queen,n);
				printf("\n");
				return 0;
}
