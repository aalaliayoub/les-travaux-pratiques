#include<stdio.h>
#include<stdlib.h>
#define taille 2
void afiich(int tr[5][5]){
    int i,j;
    int k=0;
    int tt[25];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            tt[k]=tr[i][j];
            k++;
        }
    }
    for(j=0;j<25;j++){
            printf("%d\t",tt[j]);
        }
}
int main(){
    int t[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,113,14,15},{123,1324,12,324,23},{13,234,56,2435,76}};
    afiich(t);
    return 0;
}
