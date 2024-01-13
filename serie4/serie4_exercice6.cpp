#include <stdio.h>
typedef struct panneau{
    float largeur;
    float langueur;
    int code;
    float epesseur;
}panneau;
panneau p;
void sasie(){
    printf("entrer langueur de paneau : ");
    scanf("%f",&p.langueur);
    printf("entrer largeur de paneau : ");
    scanf("%f",&p.largeur);
    printf("parmet les type de bois il y a Pin(1) chene(2) hetre(3).\nEntrer un type de bois : ");
    scanf("%d",&p.code);
    while(p.code!=1&&p.code!=2&&p.code!=3){
        printf("errreuur\n");
        printf("parmet les type de bois il y a Pin(1) chene(2) hetre(3).\nEntrer un type de bois : ");
        scanf("%d",&p.code);
    }
    printf("entrer epesseur en milimitre de paneau : ");
    scanf("%f",&p.epesseur);
}
void affichage(){
    printf("les information entrer sont : \nlangueur : %.2f\t\tlargeur : %.2f\t\ttype : %d\t\tepesseur : %.2f\n",p.largeur,p.langueur,p.code,p.epesseur);
}
void volume(){
    printf("le volume de paneau en metre cube est : %.5f m^3",p.langueur*p.largeur*p.epesseur*0.1*0.1*0.1);
}
int main()
{
    printf("\t\t\tCe programme calcul le volume en cube des paneau\n");
    sasie();
    affichage();
    volume();
    return 0;
}
