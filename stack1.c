 #include<stdio.h>
 #include <stdlib.h>
 
  typedef struct node {
    int a;
     struct node *next;
 }node;

 node* tail=NULL;
 node* createnode (int *arr,int size);
 int src(node* head,int vlu);
  node* insertfirst(node *head,int n);
        void ff(node* head);



 int main ()
 {
    int a[]={5,10,15,20,25,30,35};
   int  L=sizeof(a)/sizeof(a[0]);
      node *head=createnode (a,L);
      int A=src(head,a[4]);
       head= insertfirst(head,400);
       ff(head);

     node* tmp=NULL;
     tmp=head;
    while(tmp!=NULL)
     {
        printf("%d ->",tmp->a);
        tmp=tmp->next;
     }
     printf("NULL\n");
     printf("value = %d\n",A);
     return 0;
 }


 int src(node* head,int vlu)
 { int v=-1;
    int index=1;
      if(head==NULL) return -1;
      else
      {
        node* tmp=NULL;
        tmp=head;

        while(tmp!=NULL){
            if(tmp->a==vlu)
            {
                 v=tmp->a;
                 return v;
            }
            index++;
            tmp=tmp->next;
        }
      }
      return v;
 }

 node*  createnode (int *arr,int size)
 {
    node  *head=NULL,*tmp=NULL,*curr=NULL;
    tmp=head;
    for(int i=0;i<size;i++)
    {
        curr=(struct node*)malloc(sizeof(struct node));
        curr->next=NULL;
        curr->a=arr[i];
        if(head==NULL)
        {
            head=curr;
             tmp=curr;
        }
        else{
                    tmp->next=curr;
                            tmp=curr;

        }
        //tail=curr;
       
    }
    return head;
 
    
 }

 node* insertfirst(node *head,int n)
 {
    node *tmp=NULL;
    tmp=(node *)malloc(sizeof(node));
    
      if(head==NULL) 
      {
        tmp->a=n;
         head=tmp;
         tmp->next=NULL;
      }
      else
      {
         tmp->a=n;
         tmp->next=head;
         head=tmp;

      }
      return head;

 }
 void ff(node* head)
      {
         node* tmp=head;
         while(tmp!=NULL)
         {
            printf("%d  ",tmp->next->a);
            tmp=tmp->next->next;
         }
         printf("\n");
      }
    

  