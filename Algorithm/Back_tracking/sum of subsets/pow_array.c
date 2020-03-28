#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Enter the number of terms\n");
	scanf("%d",&n);
	int decimal_array[n];
	int input[n];
	for(int i=0;i<n;i++){
		decimal_array[i]=0;
	}
	printf("Enter the values\n");
	for(int i=0;i<n;i++){
		scanf("%d",&input[i]);
	}
	printf("Enter the limit value\n");
	int limit;
	scanf("%d",&limit);
		int end=0;
		for(int i=0;i<n;i++){
			end=end+pow(2,i);
		}
	//for(int i=1;i<end;i++){}
	printf("ans %d",end);
}