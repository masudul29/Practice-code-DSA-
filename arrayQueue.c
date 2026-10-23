#include<stdio.h>
#include<stdlib.h>
typedef struct Queue
{

    int *arr;
    int front;
    int rear;
    int capacity;
};
int ind=0;
void Enque(int x,int *arr)
{
    *(arr+ind)=x;

}

void print(int *arr)
{
    printf("%d",*(arr+ind));

}
int main()
{
    int *arr;
    arr=(int*)malloc(sizeof(int)*3);
    Enque(5,arr);
    print(arr);
    return 0;
}

