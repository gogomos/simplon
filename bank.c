#include <stdio.h>
#include <math.h>
float calcul_mensualite(float montant, float taux_annuel, int duree_annees) {
    float taux_mensuel = taux_annuel / 12 / 100;
    int nombre_mois = duree_annees * 12;
    float mensualite = (montant * taux_mensuel) / (1 - pow(1 + taux_mensuel, - nombre_mois));
    return mensualite;
}

int main() {
    int counter = 0;
    while (counter < 10) {
        float montant, taux_interet;
        int duree;
        
        printf("\nEntrez les informations du pret immobilier:\n");
        printf("Montant du pret : ");
        scanf("%f", &montant);
        printf("Taux d interet annuel (en pourcentage) : ");
        scanf("%f", &taux_interet);
        printf("Duree du pret (annees) : ");
        scanf("%d", &duree);

        if (duree < 5) {
            printf("La duree doit etre d au moins 5 ans.\n");
            continue;
        }
        if (taux_interet < 3 || taux_interet > 7) {
            printf("Le taux d interet doit etre entre 3%% et 7%%.\n");
            continue;
        }

        float mensualite = calcul_mensualite(montant, taux_interet, duree);
        printf("Le montant estime de la mensualite est : %.2f\n", mensualite);
        
        char reponse;
        printf("Voulez-vous effectuer une autre simulation ? (o/n) : ");
        scanf(" %c", &reponse);
        if (reponse != 'o' && reponse != 'O') {
            break;
        }
        
        counter++;
    }

    return 0;
}
