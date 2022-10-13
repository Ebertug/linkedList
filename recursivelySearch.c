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

	search(head, 20);

	return(0);
}

bool search(struct Node* n, int x) {

	if (n == NULL) {

		printf("There is no element at that list");
		return false;
	}
	
	if (n->data == x) {

		printf("There is %d at that list", x);
		return true;
	}
	return (search(n->next, x));
}