#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int st_ap[5],stack_size=5, top=0;

void push(int id_no){
    if(top==stack_size){
        printf("Stack is Overflow. \n");
        return;
    }


    top++;
    st_ap[top] = id_no;
}

void display(){
	int i;
    printf("Last 5 digit of my id is :\n");
    for(i=stack_size; i>=1; i--){
        printf("%d\n", st_ap[i] );
    }
}

int sum()
{

    int s=0,i;
    for(i=stack_size; i>=1; i--){
        s+=st_ap[i];
    }
    return s;
}


int main()
{

    push(1);
    push(3);
    push(9);
    push(9);
    push(3);
    display();

    int summation;
	summation=sum();
    printf("The summation of the stuck value is: %d\n",summation);
    return 0;
}
