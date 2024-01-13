#include <stdio.h>
int nb_occeurence(char t[],int n,char c){
    int i,p_oc=-1,d_oc,nbcur=0;
    for(i=0;i<n;i++){
        if(p_oc==-1 && t[i]==c){
            p_oc=i;
             nbcur++;
             d_oc=i;
        }
        else if(t[i]==c){
            nbcur++;
            d_oc=i;
        }
    }
    printf("l index commence par 0 \n");
    printf("premier occurence  %d\n",p_oc);
    printf("dernier occurence  %d\n",d_oc);
    return nbcur;
}
int main()
{
    int n,x;
    char c;
    printf("entrer la tille de la chaine :");
    scanf("%d",&n);
    char ch[n];
    printf("entrer un chiane de caractere: ");
    scanf("%s",ch); 
    printf("entrer un caractere: ");
    scanf(" %c",&c); 
    x=nb_occeurence(ch,n,c);
    printf("nomber des ocurrence est :%d",x);
    return 0;
}
