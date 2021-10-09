#include "LINKED LIST.h"
/***************************************/
struct node* mid(struct node **start)
{

    struct node *p=*start,*q=(*start)->next;
    if(*start==NULL)
     {
        return NULL;
     }
    while(q!=NULL&&q->next!=NULL)
    {
        p=p->next;
        q=q->next->next;
    }
    return p;
};
/***************************************/
struct node * binarysearch(struct node **start,int x)
{
        if(*start!=NULL)
        {
            struct node *p;
            p=mid(&(*start));
            if(p->info==x)
                return p;
            else if(x<p->info)
                {
                    p->next=NULL;
                    binarysearch(&(*start),x);
                }
            else
            {
                *start=p->next;
                binarysearch(&(*start),x);
            }
        }
        else
        {
            return NULL;
        }
};
/***************************************/
void main()
{
    struct node *start;
    start=NULL;
    int n;
    struct node * z;
    InsBeg(&start,500);
    InsBeg(&start,400);
    InsBeg(&start,300);
    InsBeg(&start,200);
    InsBeg(&start,100);
    printf("Linked list contains following Elements:\n");
    Traverse(start);
    printf("Enter the element to be search: ");
    scanf("%d",&n);
    z=binarysearch(&start,n);
    if(z==NULL)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("Element found at address : %d",&(z->info));
        printf("\nElement found is: %d\n",z->info);
    }
}
/***************************************/
