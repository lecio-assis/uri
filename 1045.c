#include <stdio.h>

int ordem(double *a, double *b, double *c);

int main(){
    double A, B, C;
    double temp;
    scanf("%lf %lf %lf", &A, &B, &C);
    ordem(&A, &B, &C);
    if(A >= B+C){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(A*A == B*B + C*C){
        printf("TRIANGULO RETANGULO\n");
    }
    if(A*A > B*B + C*C){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(A*A < B*B + C*C){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A == B && B == C){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(A == B || A == C || B ==C){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}

int ordem(double *a, double *b, double *c){
    double temp = 0;
    if(*a > *b > *c){
        return 0;
    }
    if(*a < *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*a < *c){
        temp = *a;
        *a = *c;
        *c = temp;
    }    
    if(*b < *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }
    return 0;
}
