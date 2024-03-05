#include<stdio.h>
int main()
{
    int i,j,k=0,n,p[20],temp;
    int arr[20],bt[20],com[20],tr[20],wt[20];
    float avgtr=0,avgwt=0;
    printf("Enter number of process:");
    scanf("%d",&n);
    printf("Enter Bust Time:");
    for(i=0;i<n;i++)
    {

        p[i]=i;
        scanf("%d",&bt[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(bt[i]>bt[j])
            {
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
            }
        }
        com[0]=bt[0];
        tr[0]=com[0];
        wt[0]=0;
        for(i=1;i<n;i++)
        {
            com[i]=com[i-1]+bt[i];
            tr[i]=com[i];
            wt[i]=com[i-1];
        }
        avgtr=avgtr/n;
avgwt=avgwt/n;
printf("Process\t Arrival Time\t Bust Time\t CompletionTime\t TurnarroundTime\t WaitingTime\n");
for(i=0;i<n;i++)
    printf("%d\t\t%d\t\t%d\t%d\t\t%d\t\t%d\n",i,arr[i],bt[i],com[i],tr[i],wt[i]);
printf("\naverage TurnArroundTime =%d and average waiting time=%f",avgtr,avgwt);
    }

