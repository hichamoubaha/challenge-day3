#include <stdio.h>

typedef struct {
    float longueur;
    float largeur;
} Rectangle;

int main() {
    Rectangle monRectangle;

    monRectangle.longueur = 5.0;
    monRectangle.largeur = 3.0;


    float aire = monRectangle.longueur * monRectangle.largeur;

    printf("L'aire du rectangle est : %.2f\n", aire);

    return 0;
}
