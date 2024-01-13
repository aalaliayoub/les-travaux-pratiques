#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int n;
    int*tab;
}typetableau;
typetableau creationde_tableau(int m){
    typetableau T[m];
    typetableau*p;
    p=T;
    return T;
}
void libre(typetableau t){
    free(t.tab);
}
int main(){
    int n;
    typetableau TT;
    printf("entrer le nm element de tableau: ");
    scanf("%d",&n);
    TT=creationde_tableau(n);
    libre(TT);
    return 0;
}

