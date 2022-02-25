#include <stdio.h>
#include <stdlib.h>

struct node
{
    int x;
    float y;

    struct node *next;//For address part.
};

int main()
{
    int n,i;
    //printf("Number of node: ");
    //scanf("%d", &n);
    struct node *ptr;

    ptr=(struct node*)malloc(1*sizeof(struct node));

    if(ptr== NULL)
    {
        printf("Exit");
        exit(0);
    }


    //for(i=0;i<n;i++)
    //{
        printf("Enter x and y: \n");
        scanf("%d", &ptr->x);
        scanf("%f", &ptr->y);
        ptr->next=NULL;

    //}




    //for(i=0;i<n;i++){
        printf("node: \n");

        printf("\tx = %d", ptr->x);
        printf("\ty = %f", ptr->y);
        printf("\tnext = %u", ptr->next);
        printf("\n");
    //}


}
