#include<stdio.h>
int main()
{
    int x,y,mx,mid,min,z,s;
    while(scanf("%d%d%d",&x,&y,&z)&& (x!=0&&y!=0&&z!=0))
    {
        mx=min=mid=0;
        mx=(x>y)?(x>z?x:z):(y>z?y:z);
         min=(x<y)?(x<z?x:z):(y<z?y:z);
         mid=(x+y+z)-(mx+min);
       if(mid*mid+min*min==mx*mx)
       {
            printf("right\n");
       }
       else
        printf("wrong\n");
    }
    return 0;
}
