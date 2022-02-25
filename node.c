#include<stdio.h>
#include <stdlib.h>

struct node
{
    int x;
    float y;
};



int main()
{
    int n,i;
    printf("Enter the node number: ");
    scanf("%d",&n);
    struct node *ptr;
    ptr=(struct node*) malloc(n*sizeof(struct node));

    if(ptr== NULL){
        printf("Error! Memory does not exit\n");
        exit(0);
    }

    for(i=0;i<n;i++){
        printf("Enter the value of x and y: \n");
        scanf("%d", &(ptr+i)->x);
        scanf("%f", &(ptr+i)->y);
    }
    printf("The total structure value are: \n");

    for(i=0;i<n;i++){
        printf("Node: %d\t", i+1);

        printf("%d\t",(ptr+i)->x);
        printf("%f\t",(ptr+i)->y);
        printf("\n");
    }



    return 0;
}
