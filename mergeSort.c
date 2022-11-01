#include <stdio.h>
#include <stdlib.h>


struct Node
{
	int data;
	struct Node* next;
};


void addLast(struct Node** n, int data);
void printList(struct Node* n);
void merge(struct Node** n1, struct Node** n2, struct Node** n3);
void sorting(struct Node** n);
int main() {
	struct Node* list1 = (struct Node*)malloc(sizeof(struct Node));
	list1->next = NULL;
	list1->data = NULL;

	struct Node* list2 = (struct Node*)malloc(sizeof(struct Node));
	list2->next = NULL;
	list2->data = NULL;

	struct Node* list3 = (struct Node*)malloc(sizeof(struct Node));
	list3->next = NULL;
	list3->data = NULL;

	addLast(&list1, 5);
	addLast(&list1, 3);
	addLast(&list1, 1);

	addLast(&list2, 6);
	addLast(&list2, 4);
	addLast(&list2, 2);
	
	merge(&list1, &list2, &list3);
	printList(list3);
	sorting(&list3);
	//printList(list1);
	//printList(list2);
	printList(list3);
	return 0;
}
void sorting(struct Node** n) {
	struct Node* temp = *n;
	struct Node* temp2;
	struct Node* temp3 = *n;
	while (temp!=NULL){
		if ((temp->data) > (temp->next->data)) {
			printf("deneme");
			//temp2 = temp->next;

			//temp3->next = temp3->next->next;
			//*n = temp2;
		}
		temp = temp->next;
		//temp3 = temp->next;
	}
}

void merge(struct Node** n1, struct Node** n2, struct Node** n3) {
	struct Node* last1 = *n1;
	struct Node* last2 = *n2;
	struct Node* last3 = *n3;
	last3->data = last1->data;
	last1 = last1->next;
	while (last1 != NULL) {
		struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
		last3->next = newNode;
		newNode->next = NULL;
		newNode->data = last1->data;
		last3 = last3->next;
		last1 = last1->next;

	}
	while (last2 != NULL) {
		struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
		last3->next = newNode;
		newNode->next = NULL;
		newNode->data = last2->data;
		last3 = last3->next;
		last2 = last2->next;

	}
	
}


void addLast(struct Node** n, int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	struct Node* last = *n;
	newNode->data = data;
	newNode->next = NULL;
	
	if (last->data == NULL) {
		last->data = data;
		return;
	}
	
	if (*n == NULL){
		*n = newNode;
		
	}
	while (last->next != NULL) {
		last = last->next;
		
	}
	last->next = newNode;
	
}
void printList(struct Node* n) {
	while (n != NULL) {
		printf("%d\n", n->data);
		n = n->next;

	}

}