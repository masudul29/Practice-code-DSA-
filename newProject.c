

#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int v;
    struct queue* next;
} queue;

queue *head=NULL;
queue* curr=NULL;

void enque(int x)
{

    queue* tmp=(struct queue*)malloc(sizeof(queue));
    tmp->v=x;
    if(head==NULL)
    {
        head=tmp;
        curr=head;
        tmp->next=NULL;
    }
    else
    {
        curr->next=tmp;
        curr=tmp;

        tmp->next=NULL;

    }

}
int deque()
{
    queue* tmp;
    tmp=head;
    head=head->next;
    free(tmp);
    tmp=NULL;
}
void print ()
{
    struct queue *tmp=head;
    while(tmp!=NULL)
    {
        printf("%d->",tmp->v);
        tmp=tmp->next;
    }
    printf("NULL\n");
}

int main()
{


    enque(5);
    enque(6);

    enque(8);
    print();
    deque(7);
    print();
    return 0;

}
