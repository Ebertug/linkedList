#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

struct Node
{
	int data;

	struct Node* next;
};

bool search(struct Node* n, int x);

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

	search(head, head->data);
	search(head, 5);
	
	return(0);
}

bool search(struct Node* n, int x) {

	while (n != NULL) {

		if (n->data == x) {
			printf("There is %d in that list\n",x);
			return true;
		}
		n = n->next;

	}

	printf("There is no %d in that list\n",x);
	return false;
}