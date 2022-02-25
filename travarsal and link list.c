#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct node
{
  int x;

  struct node *next;

}*head=NULL;

void traversal()
{
    struct node *temp;
    temp=head;
    printf("\nLink list: \n");
    printf("Head-->");

    while(temp!= NULL){
        printf("%d-->", temp->x);
        temp=temp->next;
    }
    printf("NULL");
}


int main()
{
    int n,i;

    struct node *n1;
    n1=(struct node*)malloc(sizeof(struct node));
    n1->x=10;
    n1->next=NULL;

    printf("%d\t", n1->x);
    printf("%u\n", n1->next);

    struct node *n2;
    n2=(struct node*)malloc(sizeof(struct node));
    n2->x=20;
    n2->next=NULL;

    printf("%d\t", n2->x);
    printf("%u\n", n2->next);

    struct node *n3;
    n3=(struct node*)malloc(sizeof(struct node));
    n3->x=30;
    n3->next=NULL;

    printf("%d\t", n3->x);
    printf("%u", n3->next);

    head=n1;
    n1->next=n2;
    n2->next=n3;

    traversal();



}
