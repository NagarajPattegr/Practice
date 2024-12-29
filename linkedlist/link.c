#include<stdio.h>
#include<stdlib.h>

 struct node{
    int data;
   struct node *next;
};

void printList(struct node *Node){
    struct node* p=Node;
    while(p->next!=NULL){
        printf("%d\t",p->data);
        p=p->next;
    }
    printf("%d\n",p->data);
}
void addNode(struct node *Node,int data){
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    struct node* p=Node;
    while(p->next!=NULL){
        p=p->next;
    }
    newNode->data=data;
    p->next=newNode;
    newNode->next=NULL;
}

struct node* removeBeginNode(struct node *Node){
    struct node* p=Node;
    Node=Node->next;
    free(p);
    return Node;
}

void removeMiddleNode(struct node* head,int node){
    struct node* p=head;
    struct node* q=head->next;
    while (q->data!=node && q->next==NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==node){
    p->next=q->next;
    }
}

void removeLast(struct node* head){
    struct node* p=head;
    struct node* q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
}

void main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=NULL;
    addNode(head,99);
     addNode(head,999);
    printList(head);
    removeMiddleNode(head,909);
    // head=removeBeginNode(head);
    // removeLast(head);
    printList(head);
}