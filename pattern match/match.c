#include<stdio.h>
bool patternMatch(char* str, char* pat, int n, int m) 
{ 
	if (n < m) 
	return false; 

	// create an empty hashmap 
	unordered_map<char, string> map; 

	// store result in a boolean variable res 
	bool res = patternMatchUtil(str, n, 0, pat, m, 0, map); 

	// if solution exists, print the mappings 
	for (auto it = map.begin(); res && it != map.end(); it++) 
		cout << it->first << "->" << it->second << endl; 

	// return result 
	return res; 
} 
int main(){
	char str[10]="GeeksforGeeks";
	char pat[5]="GfG";
	int n = 10, m = 3; 
	if (!patternMatch(str, pat, n, m)) 
		printf("No Solution exists");  
	return 0; 
} 
}