#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};

void push(Node** headRef,int new_data){
    Node* node = new Node();
    node->data = new_data;
    node->next = (*headRef);
    (*headRef) = node;

}

void insertAfter(Node* prev,int new_data){
    if(prev == NULL){
        cout<<"No prev"<<endl;
        return;
    }
    Node* node = new Node();
    node->data = new_data;
    node->next = prev->next;
    prev->next = node;
}
void append(Node** headRef,int new_data){
    Node* node = new Node();
    node->data = new_data;
    Node* last = *headRef;
    node->next = NULL;

    if(*headRef == NULL){
        *headRef = node;
        return;
    }

    while(last->next!= NULL){
        last = last->next;
    }
    last->next = node;



}
void DelNode(Node** headRef,int key){
    if(*headRef == NULL)return;
    if((*headRef)->data == key){
        Node* temp = *headRef;
        *headRef = (*headRef)->next;
        free(temp);
        return;
    }
    Node* cur = (*headRef)->next;
    Node* prev = (*headRef);
    while(cur != NULL && cur->data != key){
        prev = cur;
        cur = prev->next;
    }
    if(cur == NULL)return;
    prev->next = cur->next;
    free(cur);

}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}


int main()
{
    /* Start with the empty list */
    Node* head = NULL;

    // Insert 6. So linked list becomes 6->NULL
    append(&head, 6);

    // Insert 7 at the beginning.
    // So linked list becomes 7->6->NULL
    push(&head, 7);

    // Insert 1 at the beginning.
    // So linked list becomes 1->7->6->NULL
    push(&head, 1);

    // Insert 4 at the end. So
    // linked list becomes 1->7->6->4->NULL
    append(&head, 4);

    // Insert 8, after 7. So linked
    // list becomes 1->7->8->6->4->NULL
    insertAfter(head->next, 8);

    cout<<"Created Linked list is: ";
    printList(head);
    DelNode(&head, 1);
    puts("\nLinked List after Deletion of 1: ");
    printList(head);

    return 0;
}
