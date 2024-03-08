#include <stdio.h>
int main()
 {
    typedef struct Node{
        int data;
        struct Node* next;

    } Node;

    Node* createnode (int data){
        Node* newNode = (Node*)malloc(sizeof(Node));
    }

 
   return 0;
 }