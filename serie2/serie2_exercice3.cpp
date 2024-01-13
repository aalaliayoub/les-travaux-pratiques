#include<stdio.h>
void initialisation(int Nb_jour[]){
	int i;
	for (i=1;i<=12;i++){
		if (i==2){
				Nb_jour[i]=28;
		}
		else if ((i%2==0 && i<=7)|| i%2!=0 && i>7){
				Nb_jour[i]=30;
		}
		else{
				Nb_jour[i]=31;
		}
	
	}
}
void imprssion(int t[]){
	int i,s=0;
	for(i=1;i<=12;i++){
		s=s+t[i];
	}
	printf("%d\n",s);
}

int main(){
int i;
	int Nb_jour[12];
	initialisation(Nb_jour);
	imprssion(Nb_jour);
	for(i=0;i<12;i++){
		printf("%d\n",Nb_jour[i]);
	}
	
	return 0;
}
