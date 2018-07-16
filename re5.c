#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct list {
	struct node *head;
	struct node *tail;
};

void list_init(struct list *list_buf){
	list_buf->tail = NULL;
	list_buf->head = list_buf->tail;
}

void list_add_to_tail(struct list *list_buf, int n){
	
	if(list_buf->head==NULL){
		list_buf->tail =  malloc(16);
		list_buf->tail->data = n;
		list_buf->tail->next = NULL;
		list_buf->head = list_buf->tail;
	}
	else{
		list_buf->tail->next = malloc(16);
		list_buf->tail->next->data = n;
		list_buf->tail->next->next = NULL;
		list_buf->tail = list_buf->tail->next;	
	}
}

void list_printall(struct list *list_buf){
	struct node *search_node=list_buf->head;

	while(search_node!=NULL){
		printf("%d\n",search_node->data);
		search_node = search_node->next;
	}
}

int main(){
	struct list list_buf;
	list_init(&list_buf);
	list_add_to_tail(&list_buf,1);
	list_add_to_tail(&list_buf,2);
	list_add_to_tail(&list_buf,3);
	list_printall(&list_buf);
	return 0;
}
