include <stdio.h>
#include <string.h>
int main() {
    char t[20],s[20];
    printf("entrer votre prenom \t");
    fgets(t,sizeof(t),stdin);
    printf("entrer votre nom\t");
    fgets(s,sizeof(s),stdin);
    strcat(t,s);
    printf("la chaine t = %s",t);
    printf("la chaine s = %s",s);
    return 0;
}
