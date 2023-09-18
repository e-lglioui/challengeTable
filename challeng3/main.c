#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Écrire un programme qui demande 10 nombres entiers
    à l’utilisateur, les range dans un tableau et les trie
     de plus grand au plus petit.*/

int i,n;
int t[10];
int temp;
printf("*******challenge 3**********\n");
printf("entrer 10 nbr entier \n");
    for(i=0;i<10;i++){
      printf("saisie t[%d] :",i+1);
      scanf("%d",&t[i]);
    }

  for(i+0;i<10;i++) {
    if(t[i]<t[i+1]){
     temp=t[i];
     t[i]=t[i+1];
     t[i+1]=temp;
    }
  }
  printf(" ******** le tableau trie ******* \n");

   for(i=0;i<10;i++) {
    printf("%d  ",t[i]);
  }

    return 0;
}
