#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    char sexe;
    double const salaireDeBase = 2000;
    double salaire;

    printf("Veuillez saisir votre age: \n");
    scanf("%d", &age);
    getchar();
    printf("Veuillez saisir votre sexe (H/F): \n");
    scanf("%c", &sexe);

    salaire = (sexe == 'H' && age > 40) ? salaireDeBase + 0.2 * salaireDeBase : (sexe == 'F' && age > 40) ? salaireDeBase + 3.5 * salaireDeBase
                                                                            : (sexe == 'H' && age < 40)   ? salaireDeBase + 4 * salaireDeBase
                                                                                                          : salaireDeBase + 0.2 * salaireDeBase;
    printf("Le salaire est: %lf", salaire);
    return 0;
}

// (sexe == "H" && age > 40) ? (
//                                 salaire = salaireDeBase + (20 / 100) * salaireDeBase)
// : (sexe == "F" && age > 40) ? (
//                                   salaire = salaireDeBase + (35 / 100) * salaireDeBase)
// : (sexe == "H" && age < 40) ? (
//                                   salaire = salaireDeBase + (40 / 100) * salaireDeBase)
// : (sexe == "F" && age < 40)
//     ?

//     (salaire = salaireDeBase + (20 / 100) * salaireDeBase)
//     : (printf("Cas non pris en compte"));