#include <stdio.h>
int main()
{
    int i,j,s=0,k=0,n;
    printf("entrer un nombre : ");
    scanf("%d",&n);
    printf("\t====================================================================================\n");
	printf("\t||                                      Menu                                       ||\n");
	printf("\t||                             1.pour ajouter 2                                    ||\n");
	printf("\t||                             2.pour multiplier par 3                             ||\n");
	printf("\t||                             3.soustraire 5                                      ||\n");
	printf("\t||                             4.quitter                                           ||\n");
	printf("\t====================================================================================\n");
	printf(">>");
	scanf("%d",&i);
	while(i!=4){
	    if(i==1){
	        printf("a fin d ajouter 2 le resultat est : %d\n",n+2);
	        n=n+2;
	    }
	    if(i==2){
	        printf("a fin de multiplier par 3 le resultat est : %d\n",n*3);
	        n=n*3;
	    }
	    if(i==3){
	        printf("a fin de soustraire 5 le resultat est : %d\n",n-5);
	        n=n-5;
	    }
	printf("\t====================================================================================\n");
	printf("\t||                                      Menu                                       ||\n");
	printf("\t||                             1.pour ajouter 2                                    ||\n");
	printf("\t||                             2.pour multiplier par 3                             ||\n");
	printf("\t||                             3.soustraire 5                                      ||\n");
	printf("\t||                             4.quitter                                           ||\n");
	printf("\t====================================================================================\n");
	printf(">>");
	scanf("%d",&i);
	}
    return 0;
}
