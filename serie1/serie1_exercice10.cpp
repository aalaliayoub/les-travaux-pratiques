#include <stdio.h>
int main(){
    int i,j,s=0,k=0,n;
    printf("triangle isocele: \n");
    printf("entrer un nombre : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        k=n;
        s=0;
        while(k>i-1){
                printf(" ");
                k--;
            }
        for(j=0;j<2;j++){
            if(i==0&&j==0){
                printf(" *");
                break;
            }
            else{
                printf("*");
            }
            while(s<=2*i){
                printf(" ");
                s++;
            }
        }
        printf("\n");
        if(i==n-1){
            printf("  ");
            for(i=0;i<2*n+1;i++){
                printf("*");
            }
        }
    }

    return 0;
}
