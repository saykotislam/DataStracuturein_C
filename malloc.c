#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*ptr,sum=0;

    scanf("%d", &n);
    ptr= (int*)malloc(n*sizeof(int));

    if(ptr== NULL){
        printf("Error!");
        exit(0);
    }
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
        sum=sum+ *(ptr+i);
    }
    printf("Sum = %d",sum);
    free(ptr);
    return 0;
}
