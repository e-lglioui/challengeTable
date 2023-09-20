#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    char t[MAX];
    int i;

    printf("******************challenge 5**********************\n");
    printf("enter la chaine de caracter");
    scanf("%s",t);
    i=0;
    do{
      i++;

    }while(t[i]!='\0');
    printf("le nombre de caracter est %d",i);

    return 0;
}
