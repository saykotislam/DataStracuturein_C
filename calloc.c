#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,sum=0,*ptr;

    scanf("%d", &n);
    ptr=(int*)calloc(n,sizeof(int));

    if(ptr== NULL){
        printf("Error!");
    }

    printf("Enter the number of array: ");
    for(i=0;i<n;i++){
        scanf("%d", ptr+i);
        sum=sum+*(ptr+i);
    }
    printf("%d", sum);
    free(ptr);

    return 0;
}
