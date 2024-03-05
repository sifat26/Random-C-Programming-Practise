#include<stdio.h>
int main()
{
 int i,c,n;
 printf("Enter the number of element anarray:\n");
 scanf("%d",&n);
 int ara[n];
 printf("Enter %d elements \n",n);
 for(c=0;c<n;c++)
 scanf("%d",&ara[c]);
 printf("Enter the position to delete anelement\n");
 scanf("%d",&i);
 if(i>=n)
 printf("delete is not possible\n");
 else
{
 for(c=i+1;c<n;c++)
 ara[c-1]=ara[c];
 printf("Resultant array is\n");
 for(c=0;c<n-1;c++)
 printf("% d",ara[c]);
}
 return 0;

}
