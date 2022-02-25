#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int i;

typedef struct stringin
{
    char name[200];
    char age[200];
    char relationship[200];

    struct stringin *next;
} node;


    node *start =NULL;


void inputstring()
{
    node *newnode,*current;

    newnode = malloc(sizeof(node));

    printf("Enter person %d:\n",i);

    char name[200];
    char age[200];
    char relationship[200];

    char temp;
    scanf("%c", &temp);

    printf("Enter Name: ");
    scanf("%[^\n]", name);


    strcpy(newnode->name,name);

    scanf("%c", &temp);

    printf("Enter Age: ");
    scanf("%[^\n]", age);

    strcpy(newnode->age,age);
    scanf("%c", &temp);

    printf("Enter Relationship: ");
    scanf("%[^\n]", relationship);

    strcpy(newnode->relationship,relationship);


    newnode->next = NULL;
    if(start==NULL){
        start = newnode;
        current = newnode;
    }

    else{
        current->next=newnode;
        current=newnode;
    }
    printf("\n\n\n");
}



void display()
{
    node *current;
    current =start;

    int i=1;

    while(current!=NULL){
        printf("Person %d info:\n", i);
        printf("Name = %s \n", current->name);
        printf("Age = %s \n", current->age);
        printf("Relationship = %s \n", current->relationship);


        current = current->next;
        printf("\n");
        i++;
    }
}


int main()
{
    printf("Enter number of Family Members: ");
    int n;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        inputstring();
    }

    printf("You entered %d Family Member's info:\n", n);
    display();

    return 0;
}
