#include<stdio.h>
main()
{
 int b[100],c[100],i,j,k,n,even=0,odd=0;  printf("Enter the number of element of the  array A:\n");
 scanf("%d",&n);
 int a[n];
 printf("\nEnter %d element:\n",n);  for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 if(n==0)
 printf("Array is empty.\n");
 i=0,j=-1,k=-1;
 for(i=0;i<n;i++)
{
 if(a[i]%2==0)
{




  j++;
 b[j]=a[i];
 even++;
}

 else
{
 k++;
 c[k]=a[i];
 odd++;
}
}
 printf("\nAfter split The even array is  B:\n");
 for(j=0;j<even;j++)
 printf("%d ",b[j]);
 printf("\n\nAfter split The odd arrNay is  C:\n");
 for(k=0;k<odd;k++)
 printf("%d ",c[k]);
}
