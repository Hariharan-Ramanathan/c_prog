#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void delete_char(char* str,int n){
	strcpy(&str[n],&str[n+1]);
}
void get_ans(char* str){
	if(str[0]=='f')
		printf("Relationship:FAMILY\n");
	if(str[0]=='l')
		printf("Relationship:LOVE\n");
	if(str[0]=='a')
		printf("Relationship:AFFECTION\n");
	if(str[0]=='m')
		printf("Relationship:MARRIAGE\n");
	if(str[0]=='e')
		printf("Relationship:ENEMY\n");
	if(str[0]=='s')
		printf("Relationship:SISTER\n");
}
void small_letter(char* b,char* g){
	for(int i=0;i<strlen(b);i++){
		if(b[i]>=65 || b[i]<=90)
			b[i]=b[i]+32;	
	}
	for(int i=0;i<strlen(g);i++){
		if(g[i]>=65 || g[i]<=90)
			b[i]=b[i]+32;
	}
	
}
int no_of_letters(char* b_name,char* g_name,int b,int g){
int ans=0;
	small_letter(b_name,g_name);
	int result[26];
	for(int i=0;i<strlen(b_name);i++){
		result[122-b_name[i]]++;
	}

	for(int i=0;i<strlen(g_name);i++){
		result[122-g_name[i]]--;
	}
	for(int i=0;i<26;i++){
	ans=ans+abs(result[i]);
	}
		

return ans;
}
void get_flames(char* str,int n,int temp){
	int l=strlen(str);
	if(l>1){
		while(n>l){
		n=n-l;
		}
		delete_char(str,n-1);
	get_flames(str,(n-1)+temp,temp);
		}else{
		get_ans(str);
	}
}

int main(){
int boy,girl;
printf("Enter the number of letters in boy\n");
scanf("%d",&boy);
printf("Enter the number of letters in girl\n");
scanf("%d",&girl);
char* boy_name=malloc(boy*sizeof(char*));
char* girl_name=malloc(girl*sizeof(char*));
printf("BOY NAME:\n");
scanf("%s",boy_name);
printf("GIRL NAME:\n");
scanf("%s",girl_name);
int n=no_of_letters(boy_name,girl_name,boy,girl);
char str[]="flames";
get_flames(str,n,n);
}
