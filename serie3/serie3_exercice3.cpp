#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
	int i,j;
	float T[3][4];
	float s=0;
	float**TT;
	TT=(float**)malloc(3*sizeof(float*));
	for(i=0;i<3;i++){
	    *(TT+i)=(float*)malloc(4*sizeof(float));
	}
	for(i=0;i<3;i++){
	    for(j=0;j<4;j++){
	       printf("Entrez element [%d][%d] :",i+1,j+1);
	       scanf("%f",*(TT+i)+j);
	    }
	}
	for(i=0;i<3;i++){
	    for(j=0;j<4;j++){
	       s=s+*(*(TT+i)+j);
	    }
	}
	printf("la somme des elements de matrice utilisant les pointeur est : %.2f \n",s);
	s=0;
	printf("Ce programme calcule la somme des element d une matrice 3x4:\n");
	for(i=0;i<3;i++){
	    for(j=0;j<4;j++){
	       printf("Entrez T[%d][%d]: ",i+1,j+1);
	       scanf("%f",&T[i][j]);
	    }
	}
	for(i=0;i<3;i++){
	    for(j=0;j<4;j++){
	       s=s+T[1][j];
	    }
	}
	printf("la somme des elements de matrice utilisant les tableaux a deux index est %.2f\n",s);
	return 0;
}
