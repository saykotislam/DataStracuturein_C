#include<stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,i,n,n1;

    printf("Sixe: ");
    scanf("%d", &n);
    ptr=(int*)malloc(n*sizeof(int));

    printf("1st address: ");

    for(i=0;i<n;i++){
        printf("%u\t", ptr+i);
    }

    printf("\nEnter the new size: ");
    scanf("%d", &n1);
    ptr= realloc(ptr,n1);
    for(i=0;i<n1;i++){
        printf("%u\t",ptr+i);
    }


    return 0;
}
