#include <stdio.h>

void calculerTotal(float *totalHT, float *montantTVA, float *totalTTC, float *prix, int *quantite, float tauxTVA) {
    *totalHT = 0;
    for (int i = 0; i < sizeof(prix) / sizeof(float); i++) {
        *totalHT += prix[i] * quantite[i];
    }
    *montantTVA = *totalHT * tauxTVA;
    *totalTTC = *totalHT + *montantTVA;
}

void afficherFacture(char *nomClient, char **articles, float *prix, int *quantite, float totalHT, float tauxTVA, float montantTVA, float totalTTC, char *modePaiement) {
    printf("Facture pour : %s\n", nomClient);
    printf("Articles :\n");
    for (int i = 0; i < sizeof(articles) / sizeof(char *); i++) {
        printf("- %s : %.2f x %d\n", articles[i], prix[i], quantite[i]);
    }
    printf("Total HT : %.2f\n", totalHT);
    printf("Taux de TVA : %.2f%%\n", tauxTVA * 100);
    printf("Montant de TVA : %.2f\n", montantTVA);
    printf("Total TTC : %.2f\n", totalTTC);
    printf("Mode de paiement : %s\n", modePaiement);
}

int main() {
    char *nomClient = "Client ABC";
    char *articles[] = {"Article 1", "Article 2", "Article 3"};
    float prix[] = {10.50, 20.25, 5.75};
    int quantite[] = {2, 1, 3};
    float tauxTVA = 0.20;
    char *modePaiement = "Carte bancaire";
    float totalHT, montantTVA, totalTTC;
    calculerTotal(&totalHT, &montantTVA, &totalTTC, prix, quantite, tauxTVA);
    afficherFacture(nomClient, articles, prix, quantite, totalHT, tauxTVA, montantTVA, totalTTC, modePaiement);
    return 0;
}

