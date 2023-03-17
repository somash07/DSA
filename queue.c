#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
struct queue{
    int rear;
    int front;
    int arr[max];
};
typedef struct queue qt;
void createempty(qt *q){
    q->rear=-1;
    q->front=0;
}
int isempty(qt *q){
    if(q->rear<q->front){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(qt *q){
    if(q->rear>=max-1){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(qt *q){
    int d;
    printf("Enter data : ");
    scanf("%d",&d);
    if(isfull(q)){
        printf("full");
    }
    else{
        q->rear++;
        q->arr[q->rear]=d;
    }
}
void  denqueue(qt *q){
    int del;
    if(isempty(q)){
        printf("empty");
    }
    else{
        del=q->arr[q->front];
        q->front++;
        printf("deleted item is %d",del);
    }
}
void display(qt *q){
    int i;
    if(isempty(q)){
        printf("empty");
    }
    else{
        for(i=q->front;i<=q->rear;i++){
            printf("%d\t",q->arr[i]);
        }
    }
}
int main(){
    qt *q;
    createempty(q);
    int ch;
    while(1){
        printf("enter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: enqueue(q);
                    break;
            case 2: denqueue(q);
                    break;
            case 3: display(q);
                    break;
            case 4: exit(0);
        }
    }
    return 0;
}
