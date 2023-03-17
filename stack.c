#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
struct stack{
    int top;
    int arr[max];
};
typedef struct stack st;
void createempty(st *s){
    s->top=-1;
}
int isempty(st *s){
    if(s->top==-1){
        // printf("is empty");
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(st *s){
    if(s->top==max-1){
        // printf("full");
        return 1;
    }
    else{
        return 0;
    }
}
void push(st *s){
    int d;
    printf("enter data to be inserted: ");
    scanf("%d",&d);
    if(isfull(s)){
        printf("is full");
    }
    else{
        s->top++;
        s->arr[s->top]=d;
    }
}
void pop(st *s){
    int del;
    if(isempty(s)){
        printf("empty");
    }
    else{
        del=s->arr[s->top];
        printf("the deleted item is %d",del);
        s->top--;
    }
}
void display(st *s){
    int i;
    if(isempty(s)){
        printf("empty");
    }
    else{
        for(i=s->top;i>=0;i--){
            printf("%d\t",s->arr[i]);
        }
    }
}
int main(){
    st *q;
    createempty(q);
    int ch;
    while(1){
        printf("enter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: push(q);
                    break;
            case 2: pop(q);
                    break;
            case 3: display(q);
                    break;
            case 4: exit(0);
        }
    }
    return 0;
}