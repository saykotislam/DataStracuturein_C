#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char full_name;

    struct node* next;

}*head=NULL;



delete(char n)
{
    printf("Characters after delete: ");
    struct node *temp;
    temp=head;

    while(temp!=NULL){
        if(temp->full_name != n){
            printf("%c", temp->full_name);
        }
            temp = temp->next;
    }
}



int main()
{
    char string[100] = "MDSAIKOTISLAM";
    int len= strlen(string);
    int flg=0;


    int car[len];
    for (int i=0; i<len; i++){
       car[i]= string[i];
    }


    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(car[i]>car[j]){
               int temp= car[i];
               car[i]= car[j];
               car[j]=temp;
            }
        }
    }




    for(int i=0;i<len; i++){
      string[i]=car[i];
    }


   struct node *current, *ptr;

   for(int i=0; i<len; i++){
       ptr=(struct node*) malloc (sizeof(struct node));
        char c= string[i];
        ptr->full_name=c;
        ptr->next=NULL;

      if (head==NULL){
           head=ptr;
           current=ptr;
       }

      else{
          current->next=ptr;
          current=ptr;
      }
   }

    printf("Enter the character for delete: ");
    char n;

    scanf("%c", &n);



    struct node *temp=head;
    while(temp->next!=NULL){
       if(temp->full_name==n){
           flg++;
        }

        temp=temp->next;
    }
    if (flg==0)
    printf("Given Letter is not Found");
    else
    delete(n);


}
