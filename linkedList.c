#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

struct Node
{
	int data;

	struct Node* next;
};



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

	printf("1 -> %d\n", head->data);
	printf("2 -> %d\n", second->data);
	printf("3 -> %d\n", third->data);

	printf("%u\n", head->next);
	printf("%u\n", second->next);
	printf("%u\n", third->next);
	
	return(0);
}