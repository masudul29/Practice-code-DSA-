#include <stdio.h>
#include<stdlib.h>

typedef struct node{
    int v;
    struct node* next;
}node;
char* stk;
int top=-1;

void push(char x){
    top++;
    stk[top]=x;
}
char pop(){
   char x=stk[top];
    top--;
    return x;

}
char peek(){
    char x=stk[top];
    return x;
}


int main(){
    char *ch=(char* )malloc(20*sizeof(char));
    stk=(char*)malloc(20*sizeof(char));
    printf("input string:");
    scanf("%s",ch);
    while(*ch!='\0'){
        if(*ch=='['||*ch=='('||*ch=='{'){
            push(*ch);
        }
         else if(*ch==']'||*ch==')'||*ch=='}'){
              if(top==-1){
                printf("invalid");
                return 0;
                
              }
              char v=peek();
                if((*ch==']'&&v=='[')||(*ch=='}'&&v=='{')||(*ch==')'&&v=='('))
              {
                pop();
              }
                
                else{
                    printf("invalid");
                    return 0;
                }
             
              
            }
           
      ch++;

    
    }
     if(top==-1){
                printf("valid");

            }
            else{
                printf("invalid");
            }
    return 0;

}
