#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Écrire un programme qui demande 10 nombres entiers à l’utilisateur, les range dans un tableau avant d’en rechercher le plus grand et le plus petit.

Afficher le tableau, ainsi que le nombre le plus petit et le plus grand.*/

int i,n;
int t[10];
int max,min;
printf("*******challenge 2**********\n");
printf("entrer 10 nbr entier \n");
    for(i=0;i<10;i++){
      printf("saisie t[%d] :",i+1);
      scanf("%d",&t[i]);
    }
    //min max
    max=t[0];
    for(i=0;i<10;i++){
        if(t[i]>max){
            max=t[i];
        }

    }

    min=t[0];
    for(i=0;i<10;i++){
        if(t[i]<min){
            min=t[i];
        }

    }
    for(i=0;i<10;i++){
        printf("%d ",&t[i]);
    }
    printf("le max est : %d",max);
    printf("le min est :%d",min);
    return 0;
}
