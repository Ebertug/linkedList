#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

struct Node
{
	int data;

	struct Node* next;
};

void deleteNode(struct Node* n, int deletedata);
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


	deleteNode(&head, 5);

	printDataList(head);
	return(0);
}


void deleteNode(struct Node** n, int deletedata) {

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	
	
	

}
void printDataList(struct Node* n) {

	while (n != NULL) {

		printf("%d -> ", n->data);
		n = n->next;

	}

}