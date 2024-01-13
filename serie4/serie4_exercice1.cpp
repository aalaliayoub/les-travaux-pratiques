#include<stdio.h>
#include<stdlib.h>
typedef struct numbercomplexe{
    int a;
    int b;
}complexe;
int imag(complexe z){
    return 2*z.b;
}
int real(complexe z){
    return 2*z.a;
}
complexe mul(complexe z1,complexe z2){
    complexe z3;
    z3.a=z1.a*z2.a-z1.b*z2.b;
    z3.b=z1.a*z2.b + z1.b*z2.a;
    return z3;
}
complexe*mmul(complexe*z1,complexe*z2){
    complexe*z3;
    z3->a=z1->a*z2->a-z1->b*z2->b;
    z3->b=z1->a*z2->b + z1->b*z2->a;
    return z3;
}
int main() {
    complexe z,z1;
    complexe *z2;
    int h;
    z.a=1;
    z.b=1;
    complexe c;
    h=imag(z);
    printf("double imaginer de z %d\n",h);
    h=real(z);
    printf("double reel de z  %d\n",h);
    z1=mul(z,z);
    printf("reel de mul est %d image est %d\n",z1.a,z1.b);
    z2=mmul(&z,&z);
    printf("reel de mul est %d image est %d ",z2->a,z2->b);
	return 0;
}
