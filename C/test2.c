#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
   char* s;
   int key;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void printList() {
   struct node *ptr = head;
   printf("\n[ ");

   while(ptr != NULL) {
      printf("(%d,%s) ",ptr->key,ptr->s);
      ptr = ptr->next;
   }
   printf(" ]");
}

void insertFirst(int key, char *s) {
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->key = key;
   link->s =malloc(strlen(s) + 1) ;
   strcpy(link->s, s);

   link->next = head;

   head = link;
}

struct node* deleteFirst() {

   struct node *tempLink = head;

   head = head->next;

   return tempLink;
}

bool isEmpty() {
   return head == NULL;
}

int length() {
   int length = 0;
   struct node *current;

   for(current = head; current != NULL; current = current->next) {
      length++;
   }

   return length;
}

struct node* find(int key) {

   struct node* current = head;

   if(head == NULL) {
      return NULL;
   }

   while(current->key != key) {

      if(current->next == NULL) {
         return NULL;
      } else {
         current = current->next;
      }
   }

   return current;
}

struct node* delete(int key) {

   struct node* current = head;
   struct node* previous = NULL;

   if(head == NULL) {
      return NULL;
   }

   while(current->key != key) {

      if(current->next == NULL) {
         return NULL;
      } else {
         previous = current;
         current = current->next;
      }
   }

   if(current == head) {
      head = head->next;
   } else {
      previous->next = current->next;
   }

   return current;
}

void sort() {

   int i, j, k, tempKey;
   char *tempData;
   struct node *current;
   struct node *next;

   int size = length();
   k = size ;

   for ( i = 0 ; i < size - 1 ; i++, k-- ) {
      current = head;
      next = head->next;

      for ( j = 1 ; j < k ; j++ ) {

         if ( current->s > next->s ) {
            tempData = current->s;
            current->s = next->s;
            next->s = tempData;

            tempKey = current->key;
            current->key = next->key;
            next->key = tempKey;
         }

         current = current->next;
         next = next->next;
      }
   }
}

void reverse(struct node** head_ref) {
   struct node* prev   = NULL;
   struct node* current = *head_ref;
   struct node* next;

   while (current != NULL) {
      next  = current->next;
      current->next = prev;
      prev = current;
      current = next;
   }

   *head_ref = prev;
}

int main() {
   insertFirst(1,'a');
   insertFirst(2,'r');
   insertFirst(3,'r');
   insertFirst(4,'y');
   insertFirst(5,'a');
   insertFirst(6,'n');

   printf("Original List: ");

   printList();

   while(!isEmpty()) {
      struct node *temp = deleteFirst();
      printf("\nDeleted value:");
      printf("(%d,%s) ",temp->key,temp->s);
   }

   printf("\nList after deleting all items: ");
   printList();
   insertFirst(1,10);
   insertFirst(2,20);
   insertFirst(3,30);
   insertFirst(4,1);
   insertFirst(5,40);
   insertFirst(6,56);

   printf("\nRestored List: ");
   printList();
   printf("\n");

   struct node *foundLink = find(4);

   if(foundLink != NULL) {
      printf("Element found: ");
      printf("(%d,%s) ",foundLink->key,foundLink->s);
      printf("\n");
   } else {
      printf("Element not found.");
   }

   delete(4);
   printf("List after deleting an item: ");
   printList();
   printf("\n");
   foundLink = find(4);

   if(foundLink != NULL) {
      printf("Element found: ");
      printf("(%d,%s) ",foundLink->key,foundLink->s);
      printf("\n");
   } else {
      printf("Element not found.");
   }

   printf("\n");
   sort();

   printf("List after sorting the data: ");
   printList();

   reverse(&head);
   printf("\nList after reversing the data: ");
   printList();
}
