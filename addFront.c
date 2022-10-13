#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

struct Node
{
	int data;

	struct Node* next;
};

void addFront(struct Node** n, int new_data);
void printDataList(struct Node* n);
int main() {
	struct Node* head = NULL;
	int x;
	int counter=0;
	int want=0;
	printf("Kac Sayi Eklemek Istiyorsunuz -> ");
	scanf_s("%d", &want);
while (counter < want){
	
	printf("Eklemek istediginiz Sayi -> ");
	scanf_s("%d", &x);
	addFront(&head, x);
	counter++;
}
	printDataList(head);
	return(0);
}


void addFront(struct Node **n, int newData) {

	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	
	newNode->data = newData;
	newNode->next = (*n);
	(*n) = newNode;

}
void printDataList(struct Node* n) {

	while (n != NULL) {

		printf("%d -> ", n->data);
		n = n->next;

	}

}