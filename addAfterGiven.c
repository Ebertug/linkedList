#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

struct Node
{
	int data;

	struct Node* next;
};

void addAfter(struct Node* n, int new_data);
void printDataList(struct Node* n);


int main() {
	
	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	struct Node* second = (struct Node*)malloc(sizeof(struct Node));
	struct Node* third = (struct Node*)malloc(sizeof(struct Node));

	head->data = 10;
	second->data = 20;
	third->data = 30;

	head->next = second;
	second->next = third;
	third->next = NULL;

	addAfter(second, 5);

	printDataList(head);
	return(0);
}


void addAfter(struct Node* n, int newData) {

	if (n == NULL) {
		printf("previous cannot be NULL");
		return;
	}

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	
	newNode->data = newData;
	newNode->next = n->next;
	n->next = newNode;

}
void printDataList(struct Node* n) {

	while (n != NULL) {

		printf("%d -> ", n->data);
		n = n->next;

	}

}