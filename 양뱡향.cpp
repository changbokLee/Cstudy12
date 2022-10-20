/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int data;
    struct Node *prev;
    struct Node *next;
}   Node;


Node *head , *tail;

void insert(int data){
    Node* node = (Node*) malloc(sizeof(Node));
    node -> data = data;
    Node* cur;
    cur = head->next;
    while (cur->data <data && cur != tail){
        cur =cur->next;
    }
    Node*prev = cur -> prev;
    prev->next = node;
    cur->prev = node;
    node->next = cur;
}


int main(void)
{
    
    head = (Node*) malloc(sizeof(Node));
    tail = (Node*) malloc(sizeof(Node));
    head -> next = tail;
    head -> prev = head;
    tail -> next = tail;
    tail -> next = head;
    insert(2);
    insert(1);
    insert(3);
    insert(9);
    insert(7);
    removeFront();
    show();
    return 0;
   
    return 0;
}
