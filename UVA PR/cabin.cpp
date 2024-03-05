#include<stdio.h>
int main()
{
    int count=0,n,i;
    float length, width, depth, weigh;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%f %f %f %f",&length, &width,& depth,& weigh);
        if(length+width+depth<=125 && weigh<=7 || length<=56 && width <=45 && depth<=25&& weigh<=7)
        {
            count++;
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }

    }
    printf("%d\n",count);
    return 0;
}
