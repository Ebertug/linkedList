
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
struct node
{
    int data;
    struct node *next;
};



void deleteNode(struct node **head, int key)
{
      
      struct node *temp;

    
      if((*head)->data == key)
      {
          temp = *head;    
          *head = (*head)->next;
          free(temp);
      }
      else
      {
          struct node *current  = *head;
          while(current->next != NULL)
          {
            
              if(current->next->data == key)
              {
                  temp = current->next;
                 
                  current->next = current->next->next;
                  free(temp);
                  break;
              }
              
              else
                  current = current->next;
          }
      }
}

void printList(struct node *head)
{
    struct node *temp = head;

 
    while(temp != NULL)
    {
         printf("%d ->", temp->data);
         temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
     struct node *head = (struct Node*)malloc(sizeof(struct Node));
     struct node *second = (struct Node*)malloc(sizeof(struct Node));
     struct node *third = (struct Node*)malloc(sizeof(struct Node));

     head->data = 10;
     second->data = 20;
     third->data = 30;
        
     head->next = second;
     second->next = third;
     third->next = NULL;
  
  
    
     printList(head);

     
     deleteNode(&head,10);
     printList(head);

   
     deleteNode(&head,30);
     printList(head);

    
     deleteNode(&head,20);
     printList(head);

     return 0;
}
