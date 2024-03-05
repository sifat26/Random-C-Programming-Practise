#include<stdio.h>
int main(){
int i,j,k,n;
int arr[20],bt[20],com[20],tr[20],wt[20];
float avgtr=0,avgwt=0;
printf("Enter Number of process: ");
scanf("%d",&n);
printf("Enter arrival time & bust time :");
for(i=0;i<n;i++)
{
    scanf("%d%d",&arr[i],&bt[i]);

}
for(i=0;i<n;i++)
{

    k+=bt[i];
    com[i]=k;
    tr[i]=com[i]-arr[i];
    avgtr+=tr[i];
    avgwt+=wt[i];
}
avgtr=avgtr/n;
avgwt=avgwt/n;
printf("Process\t Arrival Time\t Bust Time\t CompletionTime\t TurnarroundTime\t WaitingTime\n");
for(i=0;i<n;i++)
    printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d",i,arr[i],bt[i],com[i],tr[i],wt[i]);
printf("\naverage TurnArroundTime =%d and average waiting time=%f",avgtr,avgwt);

}
