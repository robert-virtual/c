#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define sum(n1,n2)\
    (n1+n2)

int sumar(int n1, int n2){
    return n1+n2;
}
#define getrandom(min, max) \
    ((rand()%(int)(((max) + 1)-(min)))+ (min))

#define hola 10
#define hola2 "hola q tal"

int main(){
    char name[15];
    printf("Name: %s\n",name);
    scanf("%s",name);
    printf("Name: %s\n",name);
    
    printf("hola: %d\n",hola);
    printf("hola2: %s\n",hola2);
    int res = getrandom(10,100);
    printf("res: %d\n",res);
    printf("rand: %d\n",rand());
    int n1 = 0,n2=0;
    printf("ingrese n1:");
    scanf("%d",&n1);
    
    printf("ingrese n2:");
    scanf("%d",&n2);

    printf("sum(%d+%d): %d\n",n1,n2,sum(n1,n2));
    return 0;
}