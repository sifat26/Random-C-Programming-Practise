#include<stdio.h>
int main()
{
  int x1,y1,i,l;
  char ss[100];

  scanf("%d%d",&x1,&y1);
  scanf("%s",ss);
   l=strlen(ss);

  for(i=0;i<l;i++)
  {


    if(ss[i]=='U')
        y1++;
    else if(ss[i]=='D')
        y1--;
    else if(ss[i]=='L')
        x1--;
        else if(ss[i]=='R')
        x1++;
  }
  printf("%d %d\n",x1,y1);
  return 0;
}
