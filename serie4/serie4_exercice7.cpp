#include <stdio.h>
float s=0;
int i=0;
typedef struct produit{
    int reference;
    float prix;
    int quantite;
}produit;
void saisie_affiche(int n){
    produit p;
    printf("ENTRER: le refernce de produit %d: ",i+1);
    scanf("%d",&p.reference);
    printf("ENTRER: la quantite  de produit%d : ",i+1);
    scanf("%d",&p.quantite);
    printf("ENTRER: le pix en DH de produit%d : ",i+1);
    scanf("%f",&p.prix);
    printf("les unformations entrer sont\n");
    printf("reference : %d\t\tprix : %.2f\t\tquantite : %d\n",p.reference,p.prix,p.quantite);
    printf("le prix totale de ce produit est %.2f\n",p.quantite*p.prix);
    s=s+p.quantite*p.prix;
    i++;
    if(i==n){
        printf("le prix totale de commande est : %.2f\n",s);
    }
}
void main(){
    int n,i;
    printf("entrez le nombre de produit: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        saisie_affiche(n);
    } 
}
