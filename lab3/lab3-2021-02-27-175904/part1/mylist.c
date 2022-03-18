#include <stdio.h>
#include <stdlib.h>

struct Node {
    void *data;
    struct Node *next;
};

struct List {
    struct Node *head;
};

static inline void initList(struct List *list)
{
    list->head = 0;
}


struct Node *addFront(struct List *list, void *data){
	
	struct Node *newNode = malloc(sizeof(struct Node));
	if (!newNode){
		perror("malloc returned NULL");
		exit(1);
	}

	struct Node * tmp = list->head;

	newNode->next = tmp;
	list->head = newNode;
	newNode->data = data;

	return newNode;
};

void traverseList(struct List *list, void (*f)(void *)){
	
	struct Node *ptr = list->head;
	while(ptr != NULL){	
		f(ptr->data);	
		ptr = ptr->next;
	}
};

struct Node *findNode(struct List *list, const void *dataSought,
	int (*compar)(const void *, const void *)){
	
	struct Node *tmp = list->head;
	
	while(tmp){
		if (compar(tmp->data,dataSought) == 0)
			return tmp;

		tmp = tmp->next;
	}
	return NULL;
};

void flipSignDouble(void *data){
	double *tmp = (double *) (data);
	*tmp = (*tmp) * -1;
	data = tmp;
};

int compareDouble(const void *data1, const void *data2){
	
	double *a = (double *)data1;
	double *b = (double *)data2;

	if (*a == *b){
		return 0;
	}else{
		return 1;
	}	
};

static inline int isEmptyList(struct List *list)
{
    return (list->head == 0);
}

void *popFront(struct List *list){
	
	if (list->head){
		struct Node *front = list->head;
		void *tmpData;
	
		if (front->next){
			struct Node *tmp = front->next;	
			tmpData = front->data;
			list->head = tmp;
			free(front);
			return tmpData;
		}else{
			list->head=0;
			tmpData = front->data;
			free(front);
			return tmpData;
		}
	}
	return NULL;
};

void removeAllNodes(struct List *list){

	while(list->head){
		popFront(list);	
	}
};

struct Node *addAfter(struct List *list, 
	struct Node *prevNode, void *data){
	struct Node *tmp = list->head;

	if (prevNode==NULL){
		return  addFront(list, data);
	}
	
	struct Node *theNode = malloc(sizeof(struct Node));
	while(tmp){
		if(prevNode == tmp){
			theNode->next = prevNode->next;
	       		theNode->data = data;
			prevNode->next = theNode;	
			return theNode;
		}
		tmp=tmp->next;
	}
	return theNode;
};

void reverseList(struct List *list){
	
	struct Node *prv = NULL;
	struct Node *cur = list->head;
	struct Node *nxt;
	
	while (cur) {

			// if statement deals with first node in list
			if (prv==NULL){
				prv = cur;
				if(cur->next)
					cur= cur->next;
			prv->next=0;	
		}

		if (cur->next){
			nxt = cur->next;
		}else if (cur==prv){	
			nxt =NULL;
			break;
		}else{
			nxt=NULL;
		}
		cur->next=prv;
		prv=cur;
		cur=nxt;
	}
	list->head = prv;
		
};

