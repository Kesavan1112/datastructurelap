#include<stdio.h>
int main()
{
int a[50],pos,size,num,item,i;
printf("Enter the element:");
scanf("%d",&size);
printf("enter the %d size element\n",size);
for(i=0;i<=size-1;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<=size-1;i++){
printf("%d\t",a[i]);
}
printf("\nEnter the position:");
scanf("%d",&pos);

if(pos<=0||pos>size)
{
    printf("invalid deletion");
}
else
{
    item=a[pos-1];
    printf("before delete item value:%d",item);

/*for(i=pos-1;i<=size-1;i++)//i=1;1<=2;
{
    a[i]=a[i+1];//10=0,20=1,30=2 it1 a[1]=a[1+1],a[1]=a[2](30),
}*/

a[pos-1]=a[size-1];//a[2-1]=a[3-1],a[1]=a[2];,a[1]=30



printf("\nafter deletion of array:");
for(i=0;i<size-1;i++)
{
    // a[i]=a[i+1];//a[0]
printf("%d\t",a[i]);
}
}
}


/*
below  is code only for delete first element without give position(pos):

for(i=0;i<=size-1;i++)
{
a[i]=a[i+1];//size=3 i<size-1 0<=2 0=10,1=20,2=30 a[0]=a[0+1](a[1]=20) a[0]=20 a[1]=a[1+1](a[2]=30) a[1]=30 

}
size--;//2



printf("\nafter deletion of array:");
for(i=0;i<=size-1;i++)
{
    // a[i]=a[i+1];//a[0]
printf("%d\t",a[i]);
}
*/



/*

sorted array which is worst case O(n).because if i delete any element except last element,it would shift array element.

else
{
    item=a[pos-1];
    printf("before delete item value:%d",item);

for(i=pos-1;i<=size-1;i++)//i=1;1<=2;
{
    a[i]=a[i+1];//10=0,20=1,30=2 it1 a[1]=a[1+1],a[1]=a[2](30),
}




printf("\nafter deletion of array:");

for(i=0;i<size-1;i++)
{
    
printf("%d\t",a[i]);
}




*/

/*
unsorted array which is best case O(1).

else
{
    item=a[pos-1];
    printf("before delete item value:%d",item);

a[pos-1]=a[size-1];//a[2-1]=a[3-1],a[1]=a[2];,a[1]=30

for(i=0;i<size-1;i++)
{
    
printf("%d\t",a[i]);
}
}

*/