#include <stdio.h>
void sortH(int*  s, int p, int r){
	int q;
	if(p < r){
		q = partition(s, p, r);
		sortH(s,p,q-1);
		sortH(s,q+1,r);
	}
	
}
int partition(int* s, int p, int r){
	int x = s[r];
	int i = p - 1;
	int j = p;
	int temp;
	for(;j < r;j++){
		if(s[j] <= x){
			i ++;
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
		}
	}
	temp = s[i+1];
	s[i+1] = s[r];
	s[r] = temp;
	return i++;
}
int main(){
	int a[] = {1,8,5,4,9,6,3};
	 sortH(a,0,6);
	 int i = 0;
	 for(i = 0; i < 7; i ++)
	 printf("%d\n",a[i]);
	 return 0;
}

