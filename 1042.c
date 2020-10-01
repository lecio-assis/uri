#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);

    if(a > b && a > c){
        if(b > c){
            printf("%i\n%i\n%i\n", c, b, a);
        }else if(c > b){
            printf("%i\n%i\n%i\n", b, c, a);
        }
    }else if(c > b && c > a){
        if(a > b){
            printf("%i\n%i\n%i\n", b, a, c);
        }else if(a < b){
            printf("%i\n%i\n%i\n", a, b, c);
        }
    }else if(b > a && b > c){
        if(a > c){
            printf("%i\n%i\n%i\n", c, a, b);
        }else if(a < c){
            printf("%i\n%i\n%i\n", a, c, b);
        }
    }
    printf("\n%i\n%i\n%i\n", a, b, c);
    return 0;
}
