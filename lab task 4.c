
#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
    int v;
    struct node *next;
    struct node *pre;
} node;
node *tail = NULL;

void printForward(node *head);
node* createNode(int *a,int N);
void printReverse(node *head);
void deleteAny(node* curr,node* head);
void deleteLast(node* head,node *tail);
void deleteFirst(node* head);
node* findingNode(node *head,int a);


int main()
{
    int t;
    printf("Test cases: ");
    scanf("%d",&t);
    while(t--)
    {
        int N,a;
        printf("N: ");
        scanf("%d", &N);
        int arr[N];
        printf("Element: ");
        for(int i=0; i<N; i++)
        {
            scanf("%d",&arr[i]);
        }
        node* head= createNode(arr, N);
        printf("Forward: ");
        printForward(head);
        printf("\n");
        printf("Reverse: ");
        printReverse(head);
        printf("\nDelete :");
        scanf("%d",&a);
        printf("\n");
        node* curr=NULL;
        curr=findingNode(head,a);
        if(curr==NULL)
            printf("Value not found>>>>");

        else if(curr->pre==NULL)
            deleteFirst( head);
        else if(curr->next==NULL)
            deleteLast(head,tail);
        else deleteAny(curr,head);
            printf("\n");


    }
      return 0;
}
    node* createNode(int *a,int N)
    {
        node *head = NULL;
        for (int i = 0; i<N; i++)
        {
            node *tmp = (node *)malloc(sizeof(node));
            tmp->v=a[i];
            tmp->next=NULL;
            if(head==NULL)
            {
                head=tmp;
                tail=tmp;
                head->pre=NULL;
            }
            else
            {
                tail->next=tmp;
                tmp->pre=tail;
                tail=tmp;
            }
        }

    return (head);
}
void printForward(node *head)
{
    node* curr=NULL;
    curr=head;
    while(curr!=NULL)
    {
        printf("%d->",curr->v);
        curr=curr->next;
    }
    printf("NULL");
}

void printReverse(node *head)
{
    node* curr=NULL;
    curr=head;
    while(curr->next!=NULL)
    {
        // printf("%d->",curr->v);
        curr=curr->next;
    }
    while(curr!=NULL)
    {
        printf("%d->",curr->v);
        curr=curr->pre;
    }
    printf("NULL");
}

node* findingNode(node *head,int a)
{
    node* curr=NULL;
    curr=head;
    while(curr!=NULL)
    {
        if(curr->v==a)
            return curr;
        else curr=curr->next;

    }
    return curr;
}

void deleteFirst(node* head)
{
    node* curr=NULL;
    curr=head;
    head=head->next;
    head->pre=NULL;
    free(curr);
    printf("\n");
    printf("Forward: ");
    printForward(head);
    printf("\n");

    printf("Reverse: ");
    printReverse(head);

}
void deleteLast(node* head,node *tail)
{
    if(tail==NULL) return ;
    tail=tail->pre;
    free(tail->next);
    tail->next=NULL;
    printf("\n");

    printf("Forward: ");
    printForward(head);

    printf("\n");

    printf("Reverse: ");
    printReverse(head);

}
void deleteAny(node* curr,node* head)
{
    //node* curr=NULL;
    //curr=head;
    curr->pre->next=curr->next;
    curr->next->pre=curr->pre;
    free(curr);
    printf("\n");

    printf("Forward: ");
    printForward(head);
    printf("\n");

    printf("Reverse: ");
    printReverse(head);


}
