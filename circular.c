#include<stdio.h>
#include<stdlib.h>

struct node
{
    int x;
    struct node *next;
}*head=NULL;

int node_number=0;

void create()
{
    int i;
    int n_node;
    struct node *new_node,*current;
    printf("How many nodes you want to create: ");
    scanf("%d",&n_node);

    for(i=0;i<n_node;i++){
        new_node=(struct node*)malloc(sizeof(struct node));
        node_number++; //node er number gonar jonno

        printf("Enter the value of x:");
        scanf("%d",&new_node->x);

        new_node->next=NULL;


        if(head==NULL)
        {
            head=new_node;
            current=new_node;

            new_node->next=head;//for circular
        }
        else
        {
            current->next=new_node;
            current=new_node;

            current->next=head;
        }
    }

}

void traversal()
{
    struct node *temp;
    temp=head;
    int n;
    printf("How many times you want to prints: ");
    scanf("%d", &n);


    printf("The link list:\n");
    printf("Head-->");
    //while(temp!=NULL)       //ekhane jehutu konota null paoao jabe na tai for use hobe
    for(int i=0;i<node_number*n;i++){
        printf("%d-->",temp->x);
        temp=temp->next;
    }
    printf("Head");

}


void f_insert()
{
    struct node *new_node, *current,*temp;
    new_node= (struct node*)malloc(sizeof(struct node));
    node_number++;

    printf("\nEnter the value of first node: ");
    scanf("%d", &new_node->x);
    new_node->next=NULL;

    current=head;
    head=new_node;
    new_node->next= current;

    temp=head;

    for(int i=0;i<node_number-1;i++){//temp er value ta last e nilam
        temp=temp->next;
    }

    temp->next=head;//circuler
}

void l_insert()
{
    struct node *new_node,*current;
    new_node=(struct node*)malloc(sizeof(struct node));
    node_number++;
    printf("\nEnter the value of x for last node:");
    scanf("%d",&new_node->x);
    new_node->next=NULL;
    current=head;
    for(int i=0; i<node_number-2; i++)
    {
        current=current->next;
    }
    //printf("\n current= %d",current->x);
    current->next=new_node;

    new_node->next=head;//circuler
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
    node_number++;
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
    for(int i=0; i<=node_number-1; i++)
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


    //printf("pos=%d",pos);
    current=head;
    for(i=1;i<pos;i++)
    {
         current=current->next;
    }
    //printf("\n P current= %d",current->x);
    if(current==head)
    {
        //printf("In first\n");
        head=current->next;
        node_number--;
        current=head;
        for(int i=0; i<=node_number-2; i++)
        {
            current=current->next;
        }
    //printf("\n current= %d",current->x);
    ;
    current->next=head;
    }

    else if(current->next==head)
    {
        //printf("In last\n");
       current=head;
        for(i=1;i<pos-1;i++)
        {
            current=current->next;
        }
        //printf("\n current= %d",current->x);
        current->next=head;
        node_number--;
    }
    else
    {
        temp2=current->next;
        //printf("\n temp2= %d\n",temp2->x);
        current=head;
        for(i=1;i<pos-1;i++)
        {
            current=current->next;
        }
        temp1=current;
        //printf("\n temp1= %d\n",temp1->x);
        temp1->next=temp2;
        node_number--;
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

    //m_insert();

    delete_ll();
    traversal();
    return 0;

}
