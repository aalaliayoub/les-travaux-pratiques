#include<stdio.h>
#include<stdlib.h>
#define taille 2
int t[taille];
void sasie(){
    int i;
    for(i=0;i<taille;i++){
        printf("Entrer l element %d : ",i+1);
        scanf("%d",&t[i]);
    }
}
void affichage(){
    int i;
    printf("les element  de tableau sont:\n ");
    for(i=0;i<taille;i++){
        printf("%d\n ",t[i]);
    }
}
void moyenne(){
    int i;
    float s=0,moyenne;
    for(i=0;i<taille;i++){
        s=s+t[i];
    }
    moyenne=s/taille;
    printf("la moyenne est ; %.2f\n",moyenne);
}
void supression_de_max(){
    int i,max=t[0];
    int tt[taille-1];
    for(i=0;i<taille;i++){
        if(max<t[i]){
            max=t[i];
        }
    }
    for(i=0;i<taille;i++){
        if(t[i]!=max){
            tt[i]=t[i];
        }
    }
    printf("le tableau apes la supression du max est :\n");
    for(i=0;i<taille-1;i++){
        printf("%d\n",tt[i]);
    }
}
void ajouter(int n,int pos){
    int ttt[taille+1];
    int i;
    for(i=0;i<taille+1;i++){
        if(i!=pos&&i<pos){
            ttt[i]=t[i];
        }
        else if (i==pos){
            ttt[i]=n;
            ttt[i+1]=t[i];
        }
        else{
            ttt[i+1]=t[i];
        }
    }
    printf("lajoiyt\n");
    for(i=0;i<taille+1;i++){
        printf("%d\n",ttt[i]);
    }
    
}
int main(){
    int n,pos;
    sasie();
    affichage();
    moyenne();
    supression_de_min();
    supression_de_max();
    
    printf("emterer le nombre est le pos : ");
    scanf("%d%d",&n,&pos);
    ajouter(n,pos);
    return 0;
}
void supression_de_min(){
    int i,min=t[0];
    int tttt[taille-1];
    for(i=0;i<taille;i++){
        if(min>t[i]){
            min=t[i];
        }
    }
    for(i=0;i<taille;i++){
        if(t[i]!=min){
            tttt[i]=t[i];
        }
    }
    printf("le tableau apes la supression du min est :\n");
    for(i=0;i<taille;i++){
        printf("%d\n",tttt[i]);
    }
}
