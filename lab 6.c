
#include <stdio.h>
#include <stdlib.h>

typedef struct queue{
    int v;
    struct queue* next;
}queue;

queue *head=NULL;
queue* curr=NULL; 

void enque(int x)
{   
   
   queue* tmp=(struct stack*)malloc(sizeof(queue));
   tmp->v=x;
   if(head==NULL)
  {
   head=tmp;
   tmp->next=NULL;
  }
   else
   {
       curr=tmp;curr->next=NULL;
   }

}
void print (){
    struct queue *tmp=head;
    while(tmp!=NULL)
    {
        printf("%d->",tmp->v);
        tmp=tmp->next;
    }
    printf("NULL");
}

int main()
{


    enque(5);
    enque(6);
    enque(7);
    enque(8);
    print();
    return 0;

}
