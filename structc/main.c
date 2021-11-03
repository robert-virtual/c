#include <stdio.h>
#include <stdlib.h>


int main(){

    char name[25];
    printf("size: %ld\n",sizeof(name));
    printf("ingrese su nombre:");

    fgets(name,sizeof(name),stdin);
    
    puts(name);
    printf("size: %ld\n",sizeof(name));

    int arrSize = 5; 
    int nums[arrSize];

    for(int i = 0;i < arrSize;i++){
        printf("\ningrese arr[%d]: ",i);
        scanf("%d",&nums[i]);
    }
    
    system("clear");

    for(int i = 0;i < arrSize;i++){
        printf("arr[%d]: %d\n",i,nums[i]);
    }

    return 0;
}