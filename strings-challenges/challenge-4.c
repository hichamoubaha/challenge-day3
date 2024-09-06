#include <stdio.h>
#include <string.h>
int main() {
    char nom [50],prenom[50];
    int i;
    printf("entrer le nom\n");
    gets(nom);
    printf("entrer le prenom\n");
    gets(prenom);
    if(strcmp(nom,prenom)==0)
        printf("les deux tableau sont egal");
        else
        printf("les deux tableau sont pas egal");


    return 0;
}







