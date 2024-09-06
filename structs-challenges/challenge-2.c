#include <stdio.h>
#include <string.h>


typedef struct {
    char nom[50];
    char prenom[50];
    int notes[5];
} Etudiant;

int main() {
    Etudiant etudiant;

    strcpy(etudiant.nom, "hicham");
    strcpy(etudiant.prenom, "oubaha");


    etudiant.notes[0] = 15;
    etudiant.notes[1] = 12;
    etudiant.notes[2] = 18;
    etudiant.notes[3] = 14;
    etudiant.notes[4] = 16;


    printf("Nom de l'etudiant : %s\n", etudiant.nom);
    printf("Prenom de l'etudiant : %s\n", etudiant.prenom);
    printf("Notes :\n");
    for (int i = 0; i < 5; i++) {
        printf("Note %d : %d\n", i + 1, etudiant.notes[i]);
    }

    return 0;
}
