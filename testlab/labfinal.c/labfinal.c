#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
    char data;
    struct Node* next;
};

void rvrs_print(struct Node* head){
    if(head == NULL){
        return;
    }

    printf("%c", head->data);
    rvrs_print(head->next);
}

void push_data(struct Node* *hr, char new_data){
    struct Node *new_node;

    new_node =(struct Node*) malloc(sizeof(struct Node));

    new_node->data  = new_data;
    new_node->next = (*hr);
    (*hr)    = new_node;
}


int main()
{
    int i;
    struct Node *head;
    head = NULL;

    char name[50]="saykot"; //My Name is saykot.
    int l=strlen(name);

    for(i=0;i<l;i++){
        push_data(&head,name[i]);
    }
    rvrs_print(head);
    return 0;
}
