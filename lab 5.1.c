
#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int v;
    struct stack* next;
}stack;

stack *stk;;

void push(int x)
{
   struct stack *tmp=(struct stack*)malloc(sizeof(struct stack));
    tmp ->v=x;
    tmp->next=stk;
    stk=tmp;
}
int pop()
{
    if(stk!=NULL){


    stack *tmp=stk;
    stk=stk->next;
    int res=tmp->v;
    free(tmp);
    return res;
    }
    else printf("UNDERFLOW");
    return -1;

}
int peeek(){
if(stk!=NULL)
    return stk->v;
else printf("stack is empty");
}
void print (){
    struct stack *tmp=stk;
    while(tmp!=NULL)
    {
        printf("%d->",tmp->v);
        tmp=tmp->next;
    }
    printf("NULL");
}
coid userInterface()
{
    printf("Press\n");
    printf("1.push")
}

int main()
{
    int capacity;
    printf("capacity:");
    scanf("&capacity");
    for(int int=0;i<capacity;i++)
    {
        int choice;
        userInterface();
        scanf("%d",&choice);
        if(choice==1){
                int value;
        scanf("%d",&value);

            push(value);
        }
    }
    stk=NULL;
    push(11);
    push(22);
    push(33);
    push(44);
    pop();
    print();
    return 0;

}
