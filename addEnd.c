#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

struct Node
{
	int data;

	struct Node* next;
};

void addEnd(struct Node* n, int new_data);
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


	addEnd(&head, 5);

	printDataList(head);
	return(0);
}


void addEnd(struct Node** n, int newData) {

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	struct Node* last = *n;

	newNode->data = newData;
	newNode->next = NULL;
	

	if (*n == NULL) {
		*n = newNode;
		return;

	}


	while (last->next != NULL) {
		last = last->next;
	

	}

	last->next = newNode;
	return;
	

}
void printDataList(struct Node* n) {

	while (n != NULL) {

		printf("%d -> ", n->data);
		n = n->next;

	}

}