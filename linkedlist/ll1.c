#include<stdio.h>
#include<stdlib.h>

 struct node{
    int data;
   struct node *next;
};

void printList(struct node *Node){
    while(Node->next!=NULL){
        printf("%d\t",Node->data);
        Node=Node->next;
    }
    printf("%d\t",Node->data);
    // Node=Node->next;
    // printf("%d\t",Node->data);
}
struct node *insertAtBegin(struct node *head,int data){
        struct node *Node=(struct node*)malloc(sizeof(struct node));
        Node->data=data;
        Node->next=head;
        return Node;
}
void insertAtMiddle(struct node *Node,int data , int index){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    struct node* p=Node;
    int i=0;
    newNode->data=data;
    while(i!=index-2){
        p=p->next;
        i++;
    }
    newNode->data=data;
    newNode->next=p->next;
    p->next=newNode;
}
 
void insertAtEnd(struct node* Node , int data){
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    struct node* p;
    newNode->data=data;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=newNode;
    newNode->next=NULL;
}

void insertionAfterNode(struct node *prevoiusNode , int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=prevoiusNode->next;
    prevoiusNode->next=newNode;
}
int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;
    struct node* newNode=insertAtBegin(head,19);
    insertAtMiddle(newNode,20,3);
    insertAtEnd(newNode,100);
    insertionAfterNode(head,420);
    printList(newNode);
    return 0;
}