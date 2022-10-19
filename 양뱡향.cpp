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

void removeFront(){
    Node* node = head->next;
    head->next = node-> next;
    Node*next = node->next;
    next->prev = head;
    free(node);
}

void show(){
    Node* cur = head->next;
    while (cur! = tail){
        printf("%d", cur->data);
        cur = cur -> next;
    }
}

int main(void)
{
   
    return 0;
}
