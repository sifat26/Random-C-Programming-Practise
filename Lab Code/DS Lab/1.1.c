
#include<stdio.h>
main()
{
 int n,i,j,v;
 printf("Enter the number of element:\n");
 scanf("%d",&n);
 printf("Input %d element:\n",n);
 int a[n];
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Insert array position:\n");
 scanf("%d",&i);
 printf("Insert array value:\n");
 scanf("%d",&v);
 if(i>=n)
 a[n]=v;
 else
{
 for(j=n;j>i;j--)
 a[j]=a[j-1];
 a[j]=v;
}
 printf("The present array is:\n");
 for(j=0;j<n+1;j++)
 printf("%d\n",a[j]);
}
