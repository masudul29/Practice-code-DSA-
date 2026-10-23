#include <stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int v;
    struct Node* next;
}Node;
 Node* head=NULL;

//head=(Node*)malloc(sizeof(Node));

Node* createNode(int arr[],int n)
{
    Node*curr;
    for(int i=0;i<n;i++)
    {
        Node* tmp=(Node*)malloc(sizeof(Node));
       
        curr=head;
        tmp->v=arr[i];
        curr->next=tmp;
        tmp->next=NULL;

    }

   }

}
int main(){
    int n;
    printf("enter element: \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    creatNode(arr,n);


}
