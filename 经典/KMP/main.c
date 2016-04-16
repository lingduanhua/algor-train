#include "stdio.h"
#include "string.h"
void perfix(char* a, int* arr, int len){
	int p,k = -1;
	arr[0] = -1;
	for(p = 1; p < len; p ++){
		while(k >= 0 && a[k+1] != a[p]){
			k = arr[k];
		}
		if(a[k+1] == a[p]){
			k ++;
		}
		arr[p] = k;
	}
}
int main(){
	char s[100], t[100];
	scanf("%s",s);
	scanf("%s",t);
	int a = strlen(s);
	int b = strlen(t);
	int kmp[b];
	perfix(t,kmp,b);
	int p,k=-1;
	for(p = 0; p < a; p ++){
		while(k >=  0 && t[k+1] != s[p]){
			k = kmp[k];
		}
		if(t[k+1] == s[p]){
			k ++;
		}
		if(k == b-1){
			printf("%d",p-k+1);
			k = kmp[k];
			break;
		}
	}
	return 0;
}