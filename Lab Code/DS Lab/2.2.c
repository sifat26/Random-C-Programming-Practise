#include<stdio.h>
main()
{
 int i,j,k,m,n,p,r;
 printf("Enter the number of element of array B:\n");
 scanf("%d",&m);
 int b[m];
 printf("Enter the sorted %d element:\n",m);
 for(j=0;j<m;j++)
 scanf("%d",&b[j]);
 printf("Enter the number of element of array C:\n");
 scanf("%d",&p);
 int c[p];
 printf("Enter the sorted %d element:\n",p);
 for(k=0;k<p;k++)
 scanf("%d",&c[k]);
 int a[m+p];
 i=-1,j=0,k=0;
 M:
 if(j<=m&&k<=p)
{
 if(b[j]>c[k])
{
 i++;
 a[i]=c[k];
 k++;
}
 else
{
 i++;
 a[i]=b[j];
 j++;
}
 goto M;
}
 if(j<=m)
{
 for(r=j;r<m;r++)
{
 i++;
 a[i]=b[r];
}
}
 else
{
 for(r=k;r<=p;r++)
{
 i++;
 a[i]=c[r];
}
}
 printf("The merge sorted array of A is:\n");
 for(i=0;i<m+p;i++)
 printf("\n%d ",a[i]);
}
