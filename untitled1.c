#include <stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct	node_s {
	int data;
	struct node_s* next;
}node_t;
typedef struct link_list_s{
	node_t*phead;
	node_t*ptail;
}link_list_t;
void head_insert(link_list_t* plist, int data);
int main(){
	link_list_t list;
	list.phead=NULL;
	list.ptail=NULL;
	
	head_insert(&list,1);
	printf("%d\n",list.phead->data,list.ptail->next);
	head_insert(&list,2);
	printf("%d\n",list.phead->data,list.ptail->next);
	head_insert(&list,3);
	printf("%d\n",list.phead->data,list.ptail->next);
	return 0;
}
void head_insert(link_list_t* plist, int data){
	node_t* pnew_node=(node_t*)malloc(sizeof(node_t));
	pnew_node->data=data;
	pnew_node->next=NULL;
	
	
	if(plist->phead==NULL){
		plist->phead=pnew_node;
		plist->ptail=pnew_node;
	}
	else{
		pnew_node->next=plist->phead;
		plist->phead=pnew_node;
	}
}
