#include<stdio.h>
int main()
{
int a[20],pos,i,n;
printf("enter the number of element in the array:\n");
scanf("%d",&n);
printf("\n  Enter %d elements :\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
printf("\n Enter the location you want to delete element:\n");
scanf("%d",&pos);
if(pos>=n+1)
printf("\n Deletion not possible  in");
else
{
for(i=pos-1;i<n-1;i++)
a[i]=a[i+1];
printf("\n element in the arary after deletion:\n");
for(i=0;i<n-1;i++)
printf("%d\t",a[i]);
printf("\n");
}
return 0;
}
