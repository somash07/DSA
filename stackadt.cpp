#include<iostream>
#include<conio.h>
#define max 5
using namespace std;
class stack{
    int top;
    int a[max];
    public:
        stack(){
            top=-1;
        }
        void push(int d){
            if(top==max-1){
                cout<<"full"<<endl;
            }
            else{
            top++;
            a[top]=d;
            }
        }
        void pop(){
            if(top==-1){
                cout<<"empty";
            }
            else{
            cout<<"the deleted item is "<<a[top]<<endl;
            top--;
            }
        }
        void display(){
            for(int i=top;i>=0;i--){
                cout<<a[i]<<endl;
            }
        }
};
int main(){
    stack s;
    int ch;
    while(1){
        printf("enter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: int data;
                    cin>>data;
                    s.push(data);
                    break;
            case 2: s.pop();
                    break;
            case 3: s.display();
                    break;
            case 4: exit(0);
        }
    }
    return 0;
}