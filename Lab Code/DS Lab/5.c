#include<stdio.h>
struct student
{
    int value;
    struct student *next;
};
int main()
{
    struct student s1,s2,s3;
    s1.value=10;
    s1.next=&s2;
    s2.value=20;
    s2.next=&s3;
    s3.value=30;
    s3.next=NULL;
    int *head=&s1;
    struct student *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    return 0;
}
