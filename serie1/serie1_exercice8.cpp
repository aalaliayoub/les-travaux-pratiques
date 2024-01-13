#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k;
    printf("exercie 8 question a :\n");
    for (i=0;i<6;i++){
        for (j=6-i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("exercie 8 question b :\n");
    for (i=0;i<10;i++){
        k=0;
        for (j=i;j<10;j++){
            printf("%d",i);
        }
        printf("\n");
        while(k<=i){
            printf(" ");
            k++;
        }
    }
	return 0;
}
