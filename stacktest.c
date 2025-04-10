#include<stdio.h>
#define N 14
int stack[N];
int i,n,top=-1,choice=0;

void push(){
    printf("enter the size of stack:\n");
    scanf("%d",&n);
    if(N>n){
        for(i=0;i<n;i++){
            scanf("%d",&stack[i]);
        top++;
        }

    }
    else{
        printf("stack is out of capacity");
    }
}
void pop(){
if(top==-1){
   printf("stack is empty");
}else{
printf("pop is %d",stack[top--]);
}
}
void display(){
    if(top==-1){
   printf("stack is empty");
}else{
for(i=0;i<=top;i++){
            printf("display %d",stack[i]);
        }
}
}


int main(){
//   int ch=0;
    do{
        
        printf("enter the choice");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        printf("exit");
        break;
        
        default:
        printf("default");
        }

    }while(choice!=4);
    return 0;
}