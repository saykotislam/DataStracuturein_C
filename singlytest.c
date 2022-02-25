#include<stdio.h>
#include<stdlib.h>

struct node
{
    int x;
    struct node *next;
}*head=NULL;

void create()
{
    int n_node;
    struct node *new_node,*current;
    printf("How many nodes you want to create:");
    scanf("%d",&n_node);
    for(int i=0;i<n_node;i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value of x:");
        scanf("%d",&new_node->x);
        new_node->next=NULL;
        if(head==NULL)
        {
            head=new_node;
            current=new_node;
        }
        else
        {
            current->next=new_node;
            current=new_node;
        }
    }

}
int search(int node_delete)
{
    struct node *current;
    int pos=0;
    current=head;
    while(current!=NULL)
    {
        pos++;
        if(node_delete==current->x)
        {
            return pos;
        }
        current=current->next;
    }
}
void delete_ll()
{
    int node_delete,pos,i;
    struct node *current,*temp1, *temp2;
    printf("Enter the delete node:");
    scanf("%d",&node_delete);
    pos=search(node_delete);
    current=head;
    for(i=1;i<pos;i++)
    {
         current=current->next;
    }
    //printf("\n current= %d",current->x);
    if(current==head)
    {
        head=current->next;
    }
    else if(current->next==NULL)
    {
       current=head;
        for(i=1;i<pos-1;i++)
        {
            current=current->next;
        }
        current->next=NULL;
    }
    else
    {
        temp2=current->next;
        current=head;
        for(i=1;i<pos-1;i++)
        {
            current=current->next;
        }
        temp1=current;
        temp1->next=temp2;
    }
}

void traversal()
{
    struct node *temp;
    temp=head;
    printf("The link list:\n");
    printf("Head-->");
    while(temp!=NULL)
    {
        printf("%d-->",temp->x);
        temp=temp->next;
    }
    printf("NULL\n");

}

int main()
{

    create();
    traversal();

    delete_ll();
    traversal();


    return 0;

}
