#include <stdio.h>
typedef struct {
    char nom[20];
    char prenom[20];
    int age;
} person;
int main(){
    person n1={"ahmed","mourid",20};
printf("le nom : %s  \n  le prenom : %s  \n  age : %d ",n1.nom,n1.prenom,n1.age);


  return 0;
}
