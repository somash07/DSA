#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
struct cqueue{
    int rear;
    int front;
    int arr[max];
};
typedef struct cqueue cq;
void createempty(cq *q){
    q->rear=max-1;
    q->front=max-1;
}
int isempty(cq *q){
    if(q->front==q->rear){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(cq *q){
    if(q->front==(q->rear+1)%max){
        return 1;
    }
    else{
        return 0;
    }
}
void display(cq *q){
    int i;
    for(i=(q->front+1)%max;i!=q->rear;i=(i+1)%max){
        printf("%d\t",q->arr[i]);
    }
    printf("%d\t",q->arr[q->rear]);
}
void insert(cq *q){
    int d;
    printf("enter data: ");
    scanf("%d",&d);
    if(isfull(q)){
        printf("full");
    }
    else{
        q->rear=(q->rear+1)%max;
        q->arr[q->rear]=d;
    }
}
void delete(cq *q){
    int del;
    if(isempty(q)){
        printf("empty");
    }
    else{
        q->front=(q->front+1)%max;
        del=q->arr[q->front];
        printf("deleted: %d",del);
    }
}

int main(){
    cq *q;
    createempty(q);
    int ch;
    while(1){
        printf("enter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: insert(q);
                    break;
            case 2: delete(q);
                    break;
            case 3: display(q);
                    break;
            case 4: exit(0);
        }
    }
    return 0;
}