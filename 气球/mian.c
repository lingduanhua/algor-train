#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char str[15];
	int length;
	int count ;
}HString;

int strlen2(char* t){
	int i = 0;
	while(t[i] != '\0'){
		i ++;
	}
	return --i;
}
int strc2(char* a, char* b){
	int i = 0;
	while(a[i] != '\0' && b[i] != '\0'){
		if( a[i] > b[i] ) return 1;
		else if( a[i] < b[i] ) return -1; 
		i ++;
	}
	if(a[i] == '\0')
		if(b[i] == '\0' ) return 0;
		else return 1;
	return -1;
}
void sortH(HString*  s, int p, int r){
	int q;
	if(p < r){
		q = partition(s, p, r);
		sortH(s,p,q-1);
		sortH(s,q+1,r);
	}
	
}
int partition(HString* s, int p, int r){
	int x = s[r].count;
	int i = p - 1;
	int j = p;
	HString temp;
	for(;j < r;j++){
		if(s[j].count <= x){
			if(s[j].count == x ) {
				int flag = strc2(s[j].str, s[r].str);
				if(flag <= 0){
					continue;
				}
			} 
			i ++;
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
		}
	}
	temp = s[i+1];
	s[i+1] = s[r];
	s[r] = temp;
	return i+1;
}
int main(){
	int n;
	HString *a;
	char *t;
	int al = 0;
	int flag = 1;
	scanf("%d", &n);
	int i,j;
	a = (HString *)malloc(n*sizeof(HString));
	for(i = 0; i < n; i ++){
		HString t;
		scanf("%s", &t.str);
		t.length = strlen2(t.str);
		t.count = 1;
		flag = 1;
		for(j = 0; j < al; j ++){
			if(strcmp(a[j].str, t.str) == 0){
				a[j].count ++;
				flag = 0;
			}
		}
		if(flag == 1){
			a[al] = t;
			al ++;
		}
	}
	sortH(a,0,al-1);
	printf("%d\n",al);
	int p = 0;
	for(i = al-1; i >= 0; i --){
		if(p != a[i].count){
			p = a[i].count;
			printf("%d\n" , p);
		}
		printf("%s\n" , a[i].str);
	}
	return 0;
}
