#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

struct Node
{
	int data;

	struct Node* next;
};

void printDataList(struct Node* n);
void printAddressList(struct Node* n);
int main() {

	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;

	head = (struct Node*)malloc(sizeof(struct Node*));
	second = (struct Node*)malloc(sizeof(struct Node*));
	third = (struct Node*)malloc(sizeof(struct Node*));


	head->next = second;
	second->next = third;
	third->next = NULL;


	head->data = 10;
	second->data = 20;
	third->data = 30;

	printDataList(head);
	printAddressList(head);

	return(0);
}


void printDataList(struct Node* n) {

	while (n != NULL) {

		printf("%d\n", n->data);
		n = n->next;

	}

}
void printAddressList(struct Node* n) {

	while (n != NULL) {

		printf("%u\n", n);
		n = n->next;

	}

}