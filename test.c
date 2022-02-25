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
            printf("%c",temp->full_name);
        }
            temp=temp->next;
    }
}



int main()
{
    char string[100] = "MDSAIKOTISLAM";
    int l= strlen(string);

    int arr[l];
    for (int i=0; i<l; i++){
       arr[i]= string[i];
    }


    for(int i=0; i<l; i++){
        for(int j=i+1; j<l; j++){
            if(arr[i]>arr[j]){
               int temp= arr[i];
               arr[i]= arr[j];
               arr[j]=temp;
            }
        }
    }




    for(int i=0;i<l; i++){
      string[i]=arr[i];
   }


   struct node *ptr,*current;

   for(int i=0; i<l; i++){
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
    int cnt=0;

    struct node *temp=head;
    while(temp->next!=NULL){
       if(temp->full_name==n){
           cnt++;
        }

        temp=temp->next;
    }
    if (cnt==0)
    printf("Given Letter is not Found");
    else
    delete(n);


}
