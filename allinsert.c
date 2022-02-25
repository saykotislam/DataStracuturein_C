#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct node
{
  int x;

  struct node *next;

}*head=NULL;

void create()
{
    int n_node,i;
    struct node *new_node, *current;
    printf("Enter node number: ");
    scanf("%d", &n_node);

    for(i=0;i<n_node;i++){
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter x: ");

        scanf("%d", &new_node->x);
        new_node->next= NULL;

        if(head==NULL){
            head = new_node;
            current=new_node;

        }
        else{
            current->next=new_node;
            current=new_node;
        }
    }
}


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
    printf("NULL\n");
}

void f_insert()
{
    struct node *new_node, *current;
    new_node= (struct node*)malloc(sizeof(struct node));
    printf("Enter the value of first node: ");
    scanf("%d", &new_node->x);
    new_node->next=NULL;

    current=head;
    head=new_node;

    new_node->next= current;




}

void l_insert()
{
    struct node *new_node, *current;
    new_node= (struct node*)malloc(sizeof(struct node));
    printf("Enter last node: ");
    scanf("%d", &new_node->x);
    new_node->next=NULL;
    current=head;

    while(current->next != NULL){
        current=current->next;

    }
    current->next= new_node;


}

void m_insert()
{
    int pos,i;
    printf("Enter the pssition of insert: ");
    scanf("%d", &pos);

    struct node *new_node, *current, *temp;
    current=head;

    for(i=1;i<pos-1;i++){
        current=current->next;
    }
    temp=current->next;

    new_node= (struct node*)malloc(sizeof(struct node));


    printf("Enter last node: ");
    scanf("%d", &new_node->x);
    new_node->next=NULL;

    current->next=new_node;
    new_node->next=temp;

}
int search(int node_delete)
{
    struct node *current;
    int pos=0;
    current=head;
    for(int i=0; i<=node_num-1; i++)
    {
        pos++;
        if(node_delete==current->x)
        {
            return pos;
        }
        current=current->next;
    }

}

int main()
{
    create();
    traversal();
    //f_insert();
    //traversal();

    //l_insert();
    //traversal();


    m_insert();
    traversal();
}
