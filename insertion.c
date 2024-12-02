#include <stdio.h>
int main()
{
int a[20],pos,i,n,value;
printf("\n Enter the Number of Elements in the  Array:\n");
scanf("%d",&n);
printf("\n Enter %d Elements:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
printf("\n Enter the location where you want to insert the element:\n");
scanf("%d",&pos);
printf("\n Enter the value:\n");
scanf("%d",&value);
for(i=n-1;i>=pos-1;i--)
a[i+1]=a[i];
a[pos-1]=value;
printf("\n Element in the array after insertion:\n");
for(i=0;i<=n;i++)
printf("%d\t",a[i]);
return 0;
}

