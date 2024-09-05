#include <stdio.h>

int main() {
    char nom[50];
int lon=0,i;

    printf("Entrez votre nom: ");

    scanf("%s", nom);
for(i=0;i<50;i++)
if(nom[i]!='\0')
lon++;
else
break;
printf("votre nom contien %d caracters",lon);
    return 0;
}
