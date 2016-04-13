#include "stdio.h"
#include "stdlib.h"
typedef struct LNode
{
	int value;
	struct LNode *next;
}LNode, * LinkList;

LinkList get_LinkList(){
	LinkList L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	return L;
}

void readLink(LinkList L){
	L = L->next;
	while(L){
		printf("%d ", L->value);
		L = L->next;
	}
}

int insertLink(LinkList L, int value){
	LinkList p = L;
	int tv;
	while(p->next){
		tv = p->next->value;
		if(tv == value){
			return 0;
		}
		if(tv > value){
			break;
		}
		p = p->next;
	}
	LinkList s = (LinkList)malloc(sizeof(LNode));

	s->value = value;
	s->next = p->next;
	p->next = s;
	return 1;
}

int main()
{
	int n,t,i,len = 0;;
	LinkList L = get_LinkList();
	scanf("%d",&n);
	for(i = 0; i < n; i ++){
		scanf("%d",&t);
		if(insertLink(L,t)){
			len ++;
		}
	}
	printf("%d\n",len);
	readLink(L);
	return 0;
}