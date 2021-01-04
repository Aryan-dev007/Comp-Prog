#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

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
   printf(" ]\n");
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

int main() {
    int ch;
    int key;
    char* val;
    val = malloc(sizeof(char) * 100);
    do {
        printf("------MENU----------\n");
        printf("1. Create Or Insert\n2. Display\n3. Delete\n5. Exit\n");
        printf("Enter your Choice:  ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                    printf("Key , Value(str)");
                    scanf("%d %s", &key, val);
                    insertFirst(key, val);
                    break;
            case 2: printList();
                    break;
            case 3: deleteFirst();
                    break;
            case 4: exit(0);
                    break;

            default: printf("\n-------INVALID CHOICE----------\n");
        }
    }while (ch != 4);
}
