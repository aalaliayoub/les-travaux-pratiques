#include <stdio.h>
typedef struct etudiant{
    char prenom[30];
    char nom [30];
    int CNE;
    float note[4];
    float moyenne;;
}etudiant;
int main()
{
    int j,i;
    float s=0;
    float moyenne;
    etudiant t[5];
    for(i=0;i<5;i++){
        printf("Entrer le nom de L etudiant %d : ",i+1);
        scanf("%s",t[i].nom);
        printf("Entrer le prenom de L etudiant %d : ",i+1);
        scanf("%s",t[i].prenom);
        printf("Entrer le CNE de L etudiant %d : ",i+1);
        scanf("%d",&t[i].CNE);
        for(j=0;j<4;j++){
            printf("Entrer la note %d de L etudiant %d : ",j+1,i+1);
            scanf("%f",&t[i].note[j]);
            s=s+t[i].note[j];
        }
        t[i].moyenne=s/4;
    }
    float max=t[0].moyenne;
    int posmax=0;
    for(i=0;i<5;i++){
        if(max<t[i].moyenne){
            max=t[i].moyenne;
            posmax=i;
        }
    }
    printf("L etudiant qui a la grande moyenne est :\n");
    printf("Nom : %s\t\tPrenom : %s\t\tCNE : %d\n",t[posmax].nom,t[posmax].prenom,t[posmax].CNE);
    etudiant tmp;
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(t[i].moyenne<t[j].moyenne){
                tmp=t[i];
                t[i]=t[j];
                t[j]=tmp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%s\t\t%s\t\t%d\t\t%.2f\n",t[i].nom,t[i].prenom,t[i].CNE,t[i].moyenne);
    }

    return 0;
}
