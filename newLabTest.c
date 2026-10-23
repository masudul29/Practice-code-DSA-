#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
int v;
struct Node* next;
}Node;
Node* head=NULL;
void enque(int x)
{
    Node* tmp=(Node*)malloc(sizeof(Node));
    tmp->v=x;
    tmp->next=head;
    head=tmp;
}
int deque(int x)
{
    Node* curr=head;
    Node* slow,*fast;
    slow=head;
    fast=head->next;
    while(fast->next!=NULL)
    {
        slow=fast;
         fast=fast->next;

    }
    slow->next=NULL;
    free(fast);
    fast=NULL;
    return x;
}
void print()
{
    Node* curr=NULL;
    curr=head;
    while(curr!=NULL)
    {
        printf("%d->",curr->v);

        curr=curr->next;
    }
    printf("NULL");
}

int main()
{
    enque(44);
    enque(55);
    enque(433);
    print();
    printf("\n");
    deque(44);
    print();
    return 0;
}
