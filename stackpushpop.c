#include<stdio.h>
#include<stdlib.h>
#define S 3
int stack[S];
int top=-1,i,n,sum=0,choice=1;
void push()
{
    
    
    printf("enter element for stack\n");
scanf("%d",&n);
if(S>=n-1){
printf("enter %d element",n);
for(i=0;i<n;i++){
scanf("%d",&stack[i]);
top++; //3 

    
}
}
else{
    printf("stack out of capcity");
}
    }

    
    void display(){

        if(top==-1){
    printf("stack is empty");
}
else{
        for (i = 0; i <= top; i++) {
    printf("%d\t",stack[i]);
         
    }
    }
    }


    void pop(){
//        printf("top%d",top);
//for(i=0;i<n;i++){

//printf("top=%d",--top);
if(top==-1){
    printf("stack is empty");
}
else{
 printf("\npop:%d",stack[top--]);//step 1 loop:2,step 2 loop:3 
// top--;   
}
    
//}

}
int main(){
    printf("1.push\n2.pop\n3.Display\n4.Exit");
while(choice!=4)
{
    printf("enter the choice :");
scanf("%d",&choice);
    switch(choice)
    {
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
}
}
return 0;
}