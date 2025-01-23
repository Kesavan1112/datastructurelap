#include<stdio.h>
int main()
{
int a[50],pos,size,num,i;
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
printf("\nEnter the number:");
scanf("%d",&num);
//printf("size%d",size);

if(pos<=0||pos>=size+1)//
{
printf("invalid position");
}
else{
    printf("size%d",size);

for(i=size;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos-1]=num;

size++;//increment 6
/*a[size]=a[pos-1];//a[5]=a[3-1];,a[5]=a[2],a[5]=30;
 a[pos-1]=num;//a[3-1]=10,a[2]=10;
size++;*/
for(i=0;i<size;i++)
{
 
printf("%d\t",a[i]);

}
}
}
/*unsorted array which is best case O(1)
else{
a[size]=a[pos-1];//a[5]=a[3-1];,a[5]=a[2],a[5]=30;
 a[pos-1]=num;//a[3-1]=10,a[2]=10;
size++;
for(i=0;i<size;i++)
{
 
printf("%d\t",a[i]);

}
}
*/

/*
sorted array which is worst case O(n) because shift array element.
else{
for(i=size-1;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[pos-1]=num;

size++;//increment 6

for(i=0;i<size;i++)
{
 
printf("%d\t",a[i]);

}
}*/




